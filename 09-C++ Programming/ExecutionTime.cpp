// Execution time

#include <iostream>
#include <chrono>
#include <thread>

using namespace std::literals::chrono_literals;

struct Timer
{
    std::chrono::high_resolution_clock::time_point start, end;
    std::chrono::duration<float> duration;
    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        std::cout << "Your Function Takes  " << duration.count() * 1000 << "ms To Execute." << std::endl;
    }
};
////////////////////////////////////////////

//Just An Example :
void print()
{
    /////// Creating Instance OF Timer///////
    Timer timer;

    for (int i = 0; i < 100; i++)
        std::cout << "Hello\n";
}

int main()
{
    print();
}
