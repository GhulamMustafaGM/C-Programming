#include <iostream>
using namespace std;

// This creates the class queue.
class queue
{
    int q[100];
    int sloc, rloc;

public:
    void init();
    void qput(int i);
    int qget();
};

// Initialize the queue.

void queue::init()
{

    rloc = sloc = 0;
}

// Put an integer into the queue.

void queue::qput(int i)
{
    if (sloc == 100)
    {
        cout << "Queue is full.\n";

        return;
    }
    sloc++;
    q[sloc] = i;
}

// Get an integer from the queue.

int queue::qget()
{
    if (rloc == sloc)
    {
        cout << "Queue underflow.\n";

        return 0;
    }
    rloc++;
    return q[rloc];
}

int main()
{
    queue a, b; // create two queue objects
    a.init();
    b.init();
    a.qput(10);
    b.qput(19);
    a.qput(20);
    b.qput(1);

    cout << "Contents of queue a: ";
    cout << a.qget() << " ";
    cout << a.qget() << "\n";
    cout << "Contents of queue b: ";
    cout << b.qget() << " ";
    cout << b.qget() << "\n";

    return 0;
}

/* output:

Contents of queue a: 10 20
Contents of queue b: 19 1

*/