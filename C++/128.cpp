// using the bubble sort to order an array.

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int nums[10];
	int a, b, t;
	int size;

	size = 10; // number of elements to sort

	// give the array some random initial values.
	for (t = 0; t < size; t++) nums[t] = rand();

	// display original array.

	cout << "Original array is: ";

	for (t=0; t<size; t++) cout << nums[t] << ' ';
	cout << endl;

	// This is the bubble sort.

	for (a=1; a<size; a++)
		for (b=size-1; b >=a; b--)
		{
			if (nums[b-1] > nums[b])
			{
				// if out of order
				// exchange elements
				t = nums[b-1];
				nums[b-1] = nums[b];
				nums[b] = t;
			}
		}
		// This is the end of the bubble sort.

		// Display sorted array.

		cout << "Sorted array is: ";
		for (t=0; t<size; t++)
			cout << nums[t] << ' ';
			cout << endl;
			return 0;
	}


/*
Original array is: 41 18467 6334 26500 19169 15724 11478 29358 26962 24464
Sorted array is: 41 6334 11478 15724 18467 19169 24464 26500 26962 29358
*/