// dynamic double chained list 

#include <iostream>
using namespace std;

// Trace level (min 0<=value<=3 max)
const unsigned int OPT_TRACE_LEVEL = 1;

const unsigned int EXC_OUT_OF_RANGE = 1;

void trace(string, unsigned int);

// Dynamic double-chained list
class DChain
{
private:
    // Individual item
    class Cell
    {
    private:
        string value;
        bool iAmRoot = false;
        Cell *previous = NULL;
        Cell *next = NULL;

    public:
        void setRoot(bool r = false) { iAmRoot = r; }
        bool isRoot() { return iAmRoot; }
        Cell() : value(""), previous(NULL), next(NULL) { trace("Cell constructor", 3); }
        Cell(string v) : value(v), previous(NULL), next(NULL) { trace("Cell constructor", 3); }
        ~Cell() { trace("Cell destructor", 3); }
        void setValue(string v) { value = v; }
        string getValue() { return value; }
        void setPrevious(Cell *p) { previous = p; }
        Cell *getPrevious() { return previous; }
        void setNext(Cell *n) { next = n; }
        Cell *getNext() { return next; }

    }; // class Cell

    Cell root;
    int l = 0;
    void setCurrentRoot();

public:
    DChain();
    ~DChain();
    int length();

    // Iterator on the list
    class Iterator
    {
    public:
        Iterator() { trace("Iterator constructor", 3); }
        ~Iterator() { trace("Iterator destructor", 3); }
        string value() { return pointer->getValue(); }
        bool hasNext() { return (bool)pointer->getNext(); }
        bool hasPrevious() { return !(bool)pointer->getPrevious()->isRoot(); }
        string next()
        {
            if (pointer)
            {
                pointer = pointer->getNext();
                if (pointer)
                {
                    return pointer->getValue();
                }
                else
                {
                    throw EXC_OUT_OF_RANGE;
                }
            }
            else
            {
                throw EXC_OUT_OF_RANGE;
            }
        }
        string previous()
        {
            if (pointer)
            {
                pointer = pointer->getPrevious();
                if (!pointer->isRoot())
                {
                    return pointer->getValue();
                }
                else
                {
                    pointer = NULL;
                    throw EXC_OUT_OF_RANGE;
                }
            }
            else
            {
                throw EXC_OUT_OF_RANGE;
            }
        }

    private:
        Cell *pointer;
        void setPointer(Cell *p) { pointer = p; }
        Cell *getPointer() { return pointer; }
        bool isRoot()
        {
            if (pointer)
            {
                return pointer->isRoot();
            }
            else
            {
                return false;
            }
        }
        bool isInRange() { return (bool)(pointer && !isRoot()); }

        friend DChain;
    }; // class Iterator

    Iterator current;
    void setCurrentFirst();
    void setCurrentLast();
    void add(string);
    void remove();
    void clear();
    void displayList();
    void displayListReverse();

}; // class DChain

// MAIN ___________________________________
int main()
{
    trace("Start", 0);

    // Creating a dynamic list
    DChain dc;

    // List is still empty
    dc.displayList();

    // Adding a few items
    dc.add("First item");
    dc.add("Second item");
    dc.add("Third item");
    dc.displayList();

    // Inserting an item between others
    dc.current.previous();
    dc.add("2.5 item");
    dc.displayList();

    // Displaying list in reverse order
    dc.displayListReverse();

    // Removing first item (iterator being on the first item)
    dc.remove();
    dc.displayList();

    // Removing item before last one (iterator being on the last item)
    dc.current.previous();
    dc.remove();
    dc.displayListReverse();

    // Inserting a few items
    dc.add("2.1");
    dc.add("2.2");
    dc.add("2.3");
    dc.displayList();

    // Clearing the list
    dc.clear();
    dc.displayList();

    trace("Bye!", 0);
    return 0;
}

// DChain IMPLEMENTATION __________________
DChain::DChain()
{
    trace("DChain constructor", 3);
    root.setRoot(true);
    root.setValue("ROOT");
    setCurrentRoot();
}
DChain::~DChain()
{
    trace("DChain destructor", 3);
    clear();
}

// Returns the list size
int DChain::length() { return l; }

// Positions the iterator on the first item
void DChain::setCurrentFirst()
{
    if (l > 0)
    {
        current.setPointer(root.getNext());
    }
    else
    {
        throw EXC_OUT_OF_RANGE;
    }
}

// Positions the iterator on the last item
void DChain::setCurrentLast()
{
    if (l == 0)
    {
        throw EXC_OUT_OF_RANGE;
    }
    else
    {
        current.setPointer(&root);
        while (current.hasNext())
        {
            current.next();
        }
    }
}

// Adds/Inserts a new item, right after the current position.
void DChain::add(string s)
{
    Cell *previous = current.getPointer();
    if (previous != NULL)
    {
        Cell *next = previous->getNext();
        Cell *newCell = new Cell;
        newCell->setValue(s);
        newCell->setPrevious(previous);
        newCell->setNext(next);
        if (next)
            next->setPrevious(newCell);
        previous->setNext(newCell);
        current.setPointer(newCell);
        l++;
        trace("Add \"" + s + "\"", 1);
    }
    else
        throw EXC_OUT_OF_RANGE;
}

// Removes the item at the current position
void DChain::remove()
{
    if (current.isInRange())
    {
        trace("Remove \"" + current.value() + "\"", 1);
        Cell *previous = current.getPointer()->getPrevious();
        Cell *next = current.getPointer()->getNext();
        previous->setNext(next);
        if (next)
            next->setPrevious(previous);
        delete current.getPointer();
        current.setPointer(previous);
        l--;
    }
    else
    {
        throw EXC_OUT_OF_RANGE;
    }
}

// Clears the full list
void DChain::clear()
{
    trace("Clear list __________", 1);
    if (l)
    {
        setCurrentLast();
        while (l)
        {
            remove();
        }
    }
    trace("_____________________", 1);
}

// Displays the full list
void DChain::displayList()
{
    trace("Display list ________", 1);
    if (l > 0)
    {
        setCurrentRoot();
        while (current.hasNext())
        {
            trace("Cell \"" + current.next() + "\"", 1);
        }
        trace("__ " + std::to_string(l) + " items __________", 1);
    }
    else
    {
        trace("__ Empty ____________", 1);
    }
}

// Displays the full list in reverse order
void DChain::displayListReverse()
{
    trace("Display list reverse_", 1);
    if (l > 0)
    {
        setCurrentLast();
        do
        {
            trace("Cell \"" + current.value() + "\"", 1);
            try
            {
                current.previous();
            }
            catch (unsigned int exc)
            {
                setCurrentFirst();
                break;
            }
        } while (true);
        trace("__ " + std::to_string(l) + " items __________", 1);
    }
    else
    {
        trace("__ Empty ____________", 1);
    }
}

// Private methods
void DChain::setCurrentRoot()
{
    current.setPointer(&root);
}

void trace(string t, unsigned int tl)
{
    if (tl <= OPT_TRACE_LEVEL)
    {
        cout << t << "\n";
    }
}
