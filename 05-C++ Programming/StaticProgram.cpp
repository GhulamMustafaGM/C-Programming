// Static window

#include <iostream>
#include <windows.h>

int main(int x, int y)
{
    std::cout << "enter x";
    std::cin >> x;
    std::cout << "enter y";
    std::cin >> y;
    HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD crd = {x, y};
    SMALL_RECT src = {0, 0, crd.X - 1, crd.Y - 1};
    SetConsoleWindowInfo(out_handle, true, &src);
    SetConsoleScreenBufferSIze(out_handle, crd);
    cin.get();
    return 0;
}