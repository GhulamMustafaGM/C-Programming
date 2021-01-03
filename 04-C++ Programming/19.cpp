// Dynamically Typed

#include <iostream>
using namespace std;

// No input, description is in the output.

class var
{
public:
    template <typename A>
    void set(A val)
    {
        A *a = new A();
        *a = val;
        s = sizeof(A);
        if (p != NULL)
        {
            delete p;
        }
        p = a;
    }

    template <typename A>
    A get(int i = 0)
    {
        return *((A *)(p + (i * sizeof(A))));
    }

    int size()
    {
        return s;
    }

private:
    void *p = NULL;
    int s = 0;
};

class li
{
public:
    void resize(int size)
    {
        if (v == NULL)
        {
            v = new var[size];
            count = size;
        }
        else
        {
            var *tv = new var[count];
            for (int a = 0; a < count; a++)
            {
                *(tv + a) = *(v + a);
            }
            delete v;
            v = new var[size];
            for (int a = 0; a < count && a < size; a++)
            {
                *(v + a) = *(tv + a);
            }
            count = size;
        }
    }

    var &operator[](int a)
    {
        return v[a];
    }

    int size()
    {
        int res = 0;
        for (int a = 0; a < count; a++)
        {
            res += (v + a)->size();
        }
        return res;
    }

private:
    var *v = NULL;
    int count = 0;
};

int main()
{

    cout << "This code shows how void* can be used to create a dynamically typed class. For each type, there will be the following output:\n\nTYPE NAME\nVALUE\nSIZE\n\n";

    cout << "Size of var class: " << sizeof(var) << "\n\n";

    var v;

    cout << "INT" << endl;
    v.set<int>(5);
    cout << v.get<int>() << endl;
    cout << v.size() << endl
         << endl;

    cout << "FLOAT" << endl;
    v.set<float>(3.14f);
    cout << v.get<float>() << endl;
    cout << v.size() << endl
         << endl;

    cout << "DOUBLE" << endl;
    v.set<double>(3.1415926);
    cout << v.get<double>() << endl;
    cout << v.size() << endl
         << endl;

    cout << "BOOL" << endl;
    v.set<bool>(true);
    cout << v.get<bool>() << endl;
    cout << v.size() << endl
         << endl;

    cout << "CHAR" << endl;
    v.set<char>('W');
    cout << v.get<char>() << endl;
    cout << v.size() << endl
         << endl;

    cout << "STRING" << endl;
    v.set<string>("Hello!");
    cout << v.get<string>() << endl;
    cout << v.size() << endl
         << endl;

    cout << "Now, as a dynamically typed data type, how do lists work?\n\nSize of list: " << sizeof(li) << "\n\n";

    li myList;

    myList.resize(1);
    myList[0].set<int>(2);
    cout << "[" << myList[0].get<int>() << "]" << endl;
    cout << "SIZE: " << myList.size() << "\n\n";

    myList.resize(2);
    myList[1].set<float>(3.14f * 2);
    cout << "[" << myList[0].get<int>() << ", " << myList[1].get<float>() << "]" << endl;
    cout << "SIZE: " << myList.size() << "\n\n";

    myList.resize(3);
    myList[2].set<double>(3.1415926 * 2);
    cout << "[" << myList[0].get<int>() << ", " << myList[1].get<float>() << ", " << myList[2].get<double>() << "]" << endl;
    cout << "SIZE: " << myList.size() << "\n\n";

    myList.resize(4);
    myList[3].set<bool>(false);
    cout << "[" << myList[0].get<int>() << ", " << myList[1].get<float>() << ", " << myList[2].get<double>() << ", " << myList[3].get<bool>() << "]" << endl;
    cout << "SIZE: " << myList.size() << "\n\n";

    myList.resize(5);
    myList[4].set<char>('$');
    cout << "[" << myList[0].get<int>() << ", " << myList[1].get<float>() << ", " << myList[2].get<double>() << ", " << myList[3].get<bool>() << ", " << myList[4].get<char>() << "]" << endl;
    cout << "SIZE: " << myList.size() << "\n\n";

    myList.resize(6);
    myList[5].set<string>("HI!!!");
    cout << "[" << myList[0].get<int>() << ", " << myList[1].get<float>() << ", " << myList[2].get<double>() << ", " << myList[3].get<bool>() << ", " << myList[4].get<char>() << ", " << myList[5].get<string>() << "]" << endl;
    cout << "SIZE: " << myList.size() << "\n\n";

    cout << "Only one object was actually created in the main function. That object was used to hold all of these values. It can also hold any user-defined class because it uses a void* instead of a separate pointer for each type.\n\nNow just for fun, what happens when I try to access an integer value as a float value?\n\n";

    v.set<int>(44);
    cout << v.get<float>() << "\n\nThat output was with the following code:\n\nv.set<int>(44);\ncout << v.get<float>();";

    return 0;
}