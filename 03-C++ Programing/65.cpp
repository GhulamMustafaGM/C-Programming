// Merge two lists.

#include <iostream>
#include <list>
using namespace std;
int main()
{

	list<char> lst1, lst2;
	int i;

	for(i=0; i<10; i+=2) lst1.push_back('A'+i);
	for(i=1; i<11; i+=2) lst2.push_back('A'+i);

	cout << "Contents of lst1: ";

	list<char>::iterator p = lst1.begin();

	while(p != lst1.end()) {
	cout << *p;
	p++;

	}

	cout << endl << endl;

	cout << "Contents of lst2: ";
	p = lst2.begin();
	while(p != lst2.end()) {
	cout << *p;
	p++;

	}

	cout << endl << endl;
    
	// now, merge the two lists
	lst1.merge(lst2);
	if(lst2.empty())
	cout << "lst2 is now empty\n";

	cout << "Contents of lst1 after merge:\n";
	p = lst1.begin();
	while(p != lst1.end()) {
	cout << *p;
	p++;
	}
	return 0;
}

/* output 

Contents of lst1: ACEGI

Contents of lst2: BDFHJ

lst2 is now empty
Contents of lst1 after merge:
ABCDEFGHIJ

*/