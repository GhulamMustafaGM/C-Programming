// Default parameters

// Default parameter
int sum(int x, int y = 23); //
int main()
{
    cout << sum(100); //?x=100,y=?
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
