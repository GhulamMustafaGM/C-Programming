// Bank deposit program

#include <iostream>
#include <math.h>
    using namespace std;

int main()
{
    //int i=0;
    static int amount;
    /*
    2000->0
    1000->1
    500->2
    200->3
    100->4
    50->5
    20->6
    10->7
    5->8
    2->9
    1->10*/
    cin >> amount;
    if (amount > 9999 || amount == 0)
    {
        cout << "still not applicable for grater than 10000 \n default value 1234 is taken :)";
        amount = 1234;
    }
    static int arr[11];
    static int temp, i, k;
    temp = amount;
    for (temp = amount; temp != 0; temp = temp / 10)
    {
        k = (temp % 10) * pow(10, i);
        //cout<<k;
        if (i == 0)
        {
            if (k >= 5)
            {
                k -= 5;
                arr[8]++;
            }
            if (k < 5 && k != 0)
            {
                if (k == 4)
                    arr[9] += 2;
                else if (k == 3)
                {
                    arr[9]++;
                    arr[10]++;
                }
                else if (k == 2)
                    arr[9]++;
                else
                    arr[10]++;
            }
            i++;
            continue;
        }
        else if (i == 1)
        {
            if (k >= 50)
            {
                arr[5]++;
                k -= 50;
            }
            if (k < 50 && k != 0)
            {
                if (k == 10)
                    arr[7]++;
                else if (k == 20)
                    arr[6]++;
                else if (k == 30)
                {
                    arr[6]++;
                    arr[7]++;
                }
                else if (k == 40)
                    arr[6] += 2;
            }
            i++;
            continue;
        }
        else if (i == 2)
        {
            if (k >= 500)
            {
                arr[2]++;
                k -= 500;
            }
            if (k < 500 && k != 0)
            {
                if (k == 100)
                    arr[4]++;
                else if (k == 200)
                    arr[3]++;
                else if (k == 300)
                {
                    arr[3]++;
                    arr[4]++;
                }
                else if (k == 400)
                    arr[3] += 2;
            }
            i++;
            continue;
        }
        else if (i == 3)
        {
            if (k >= 2000)
            {
                if ((k / 1000) % 2 == 0)
                    arr[0] += (k / 1000) / 2;
                else
                {
                    arr[0] += (k / 1000) / 2;
                    arr[1]++;
                }
            }
            else
                arr[1]++;
            i++;
            continue;
        }
    }
    cout << endl;
    for (int r = 0; r < 11; r++)
    {
        if (r == 0)
            k = 2000;
        else if (r == 1)
            k = 1000;
        else if (r == 2)
            k == 500;
        else if (r == 3)
            k = 200;
        else if (r == 4)
            k = 100;
        else if (r == 5)
            k = 50;
        else if (r == 6)
            k = 20;
        else if (r == 7)
            k = 10;
        else if (r == 8)
            k = 5;
        else if (r == 9)
            k = 2;
        else if (r == 10)
            k = 1;
        cout << k << "'s " << arr[r] << endl;
    }
    return 0;
}