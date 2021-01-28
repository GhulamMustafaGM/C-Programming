#include <iostream>
#include <vector>

int predict(std::vector<int> &input)
{
    std::vector<int> x;
    for (std::size_t i = 0; i < input.size() - 1; ++i)
        x.push_back(input[i + 1] - input[i]);

    int f = x[1] / x[0];
    int a = x[1] % x[0];
    int step = x.back() * f + a;

    if (a != 0)
        step = predict(x);

    return (input.back() + step);
}

float predict(std::vector<float> &input)
{
    std::vector<float> x;
    for (std::size_t i = 0; i < input.size() - 1; i++)
        x.push_back(input[i + 1] - input[i]);

    float f = x[1] / x[0];
    return (input.back() + (x.back() * f));
}

template <typename T>
void doPrediction(std::vector<T> &input)
{
    if (input.size() < 3)
    {
        std::cout << "at least 3 values required!\n";
        return;
    }
    for (typename std::vector<T>::iterator it = input.begin(); it != input.end(); ++it)
        std::cout << *it
                  << " ";

    std::cout << " ==> "
              << predict(input)
              << std::endl;
}

int main()
{

    std::vector<int> vData1{4, 7, 13, 25, 49};
    std::cout << "n+(n-1)\n";
    doPrediction(vData1);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> vData2{2, 4, 6, 8};
    std::cout << "n+2\n";
    doPrediction(vData2);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> vData3{4, 9, 16, 25, 36, 49, 64, 81};
    std::cout << "n^2\n";
    doPrediction(vData3);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> vData3_0{8, 27, 64, 125, 216};
    std::cout << "n^3\n";
    doPrediction(vData3_0);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> vData3_01{16, 81, 256, 625, 1296, 2401};
    std::cout << "n^4\n";
    doPrediction(vData3_01);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> vData3_02{32, 243, 1024, 3125, 7776, 16807, 32768, 59049};
    std::cout << "n^5\n";
    doPrediction(vData3_02);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> vData3_1{4, 9};
    std::cout << "two numbers --> linear??\n";
    doPrediction(vData3_1);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> vData4{5, 10, 17, 26, 37, 50};
    std::cout << "n^2 +1\n";
    doPrediction(vData4);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<int> vData5{25, 20, 15, 10};
    std::cout << "n-5\n";
    doPrediction(vData5);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<float> vData6{5.1, 4.08, 3.06, 2.04};
    std::cout << "n-1.02\n";
    doPrediction(vData6);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<float> vData7{2.04, 4.08, 6.12, 8.16};
    std::cout << "n+2.04\n";
    doPrediction(vData7);
    std::cout << std::endl;
    // - - - - - - - - - - - - - - - - - - - - -
    std::vector<float> vData8{16.07, 5.1, 17.9, 4.56};
    std::cout << "some random values lol\n";
    doPrediction(vData8);
    std::cout << std::endl;

    std::cout << "END\n";

    return 0;
}