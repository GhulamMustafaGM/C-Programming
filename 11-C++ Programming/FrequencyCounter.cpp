// Character frequency counter

using namespace std;
void swap(char a[100], int b[100], int i, int j)
{
    char c, d;
    int k;
    c = a[i];
    d = b[i];
    for (k = i - 1; k >= j; k--)
    {
        a[k + 1] = a[k];
        b[k + 1] = b[k];
    }
    a[j] = c;
    b[j] = d;
}
int main()
{
    char str[100] = {}, n_str[100];
    int count[100], n_count[100], i = 0, j, s = 0;
    cout << "Enter the string\n";
    cin.getline(str, 100);
    while (str[i])
    {
        s++;
        i++;
    }
    cout << str << endl
         << endl;
    for (j = 0; j < s; j++)
        count[j] = 0;
    for (i = 0; i < s; i++)
        for (j = 0; j <= i; j++)
            if (str[j] == str[i])
            {
                count[j] += 1;
                break;
            }
    j = 0;
    for (i = 0; i < s; i++)
        if (count[i] != 0)
        {
            n_str[j] = str[i];
            n_count[j] = count[i];
            j++;
        }
    s = j;
    for (i = 1; i < s; i++)
        for (j = 0; j < i; j++)
            if (int(n_str[j]) > int(n_str[i]))
            {
                swap(n_str, n_count, i, j);
                break;
            }
    cout << " Character     Frequency\n";
    for (i = 0; i < s; i++)
        cout << "  \'" << n_str[i] << "\'             " << n_count[i] << endl;
    return 0;
}