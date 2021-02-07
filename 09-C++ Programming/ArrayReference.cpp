// Array reference

#include <iostream>

// show an array
template <typename T, size_t N>
void PrintArray(const T (&array)[N])
{
    size_t i = 0;
    while (i < N)
    {
        std::cout << array[i++] << " ";
    }
    std::cout << std::endl;
}

// return a number of array elements
template <typename T, size_t N>
size_t Get_Length(const T (&array)[N])
{
    return N;
}

int main()
{

    int my_arr[5] = {1, 2, 3, 4, 5};
    double my_arr2[3] = {3.7, 4.2, 8.9};
    char my_arr3[2] = {'A', 'Z'};

    PrintArray(my_arr);
    PrintArray(my_arr2);
    PrintArray(my_arr3);

    std::cout << Get_Length(my_arr) << "\n";
    std::cout << Get_Length(my_arr2) << "\n";
    std::cout << Get_Length(my_arr3) << "\n";

    return 0;
}
