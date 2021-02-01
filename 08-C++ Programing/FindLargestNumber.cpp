
// Find largest number

#include <iostream>
#include <numeric>

double larger(double x, double y); //prototype

int main()
{

    double max;
    double num; //variables

    std::cout << "Enter 15 numbers \n";
    std::cin >> max;

    double larger(double max, double num); // variables are passed to function

    std::cout << "The largest number is: " << larger(max, num) << "\n";

    return 0;
}

//Function
double larger(double max, double num)
{

    for (unsigned int i = 0; i < 14; i++)
    { //loops the following code 15 times

        if (max >= num)
            max = max; // compares the max value and num value
        else
            max = num;

        std::cin >> num; //gets the next number from user
    }

    return max; // returns output to main function
}