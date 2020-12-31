// Demosntrate a constructor and a destructor.

#include <iostream>
using namespace std;

// This creats the class queue.

class queue
{
    int q[100];
    int sloc, rloc;

public:
    queue();  // constructor
    ~queue(); // destructor

    void qput(int i);
    int qget();
};

// This is the constructor.

queue::queue()
{
    sloc = rloc = 0;
    cout << "Queue initialized. \n";
}

// This is the destructor.

queue::~queue()

{
    cout << "Queue destroyed.\n";
}

// put an integer into the queue.

void queue::qput(int i)
{
    if (sloc == 10)
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
        cout << "Queue Underflow.\n";
        return 0;
    }
    rloc++;
    return q[rloc];
}

int main()
{
    queue a, b; // create two queue objects

    a.qput(10);
    b.qput(19);
    a.qput(20);
    b.qput(1);

    cout << a.qget() << " ";
    cout << a.qget() << " ";
    cout << b.qget() << " ";
    cout << b.qget() << " \n";

    return 0;
}

/* output:

Queue initialized.
Queue initialized.
10 20 19 1
Queue destroyed.
Queue destroyed.

*/