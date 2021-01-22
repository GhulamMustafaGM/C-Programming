// Simple stocking program

#include <iostream>
#include <windows.h>
using namespace std;
int code = 0, i;
const int dim = 100;
struct product
{
    int num;
    string des;
    float prix;
    int stock;
};
product t[dim];
void ajouter()
{
    t[code].num = code + 1;
    code++;

    if (code >= 100)

        cout << " The array of products is full\n try to delete some products so you can replace it ";

    cout << " Entre the name of the  product\n";
    cin >> t[code - 1].des;
    cout << " Entre the price of the product\n";
    cin >> t[code - 1].prix;
    cout << " Entre the amount of the product \n";
    cin >> t[code - 1].stock;
}
void affichage()
{

    if (code == 0)
        cout << " \n The array is empty \n  You have to add products first before showing it \n\n";

    for (i = 0; i < code; i++)
    {
        cout << "  " << t[i].num << "  " << t[i].des << "  " << t[i].prix << "  " << t[i].stock << endl;
    }
    cout << "\n\n";
}

void supprimer(int a)
{

    for (i = a; i < code; i++)
    {

        t[i].des = t[i + 1].des;
        t[i].prix = t[i + 1].prix;
        t[i].stock = t[i + 1].stock;
    }
    code--;
}
void vendre(int con, int b)
{
    if ((t[b].stock - con) == 0)
    {
        cout << " Attention the amount of this product has finished";
        t[b].stock = (t[b].stock) - con;
    }
    else
        t[b].stock = (t[b].stock) - con;
}
void boot()
{
    int option, price, amount, z, p = 0, i, k, x;
    string name;
    system("color f");

    cout << " Choose between the options below :\n\n 1 Add a product\n 2 delete a product\n";

    cout << " 3 Show all the products available \n 4 Marke the selling of a product\n 5 Exit\n ";

    cin >> option;
    switch (option)
    {

    case (1):
        cout << " \t\t\t the adding mode\n\n";
        ajouter();
        boot();
        break;

    case (2):
        cout << " \t\t\t deleting mode\n\n";
        if (code == 0)
        {
            cout << "\n There is no product available \n You have to add a product first \n\n";
            boot();
        }

        else
        {
            cout << "Give the code of the product that you want to delete \n";
            cin >> x;
            supprimer(x - 1);
            boot();
        }
        break;

    case (3):
        cout << " \t\t\t the table of products\n\n";
        affichage();
        boot();
        break;

    case (4):
        system("color a5");
        cout << " \t\t\t the seeling mode \n\n";
        if (code == 0)
        {
            cout << "    There is no product available the array is empty \n you have to add products before mark selling \n\n";
            boot();
        }
        else
        {
            do
            {
                if (p > 0)
                    cout << " 	le code ne exist pas\n";
                cout << "		Give the code of the product \n ";
                cin >> k;

                p++;
            } while ((k <= 0) || (k > code));
            do
            {
                cout << "		entre the amount of selling\n";
                cin >> z;
                if (z == 0)
                    cout << " 	the amount is not gonna change \n ";
                if (z > t[k - 1].stock)
                    cout << "		the amoount is too big try with another smaller one\n ";
                if (z < 0)
                    cout << " 	the amount is too small try with another bigger one\n ";
            } while ((z > t[k - 1].stock) || (z <= 0));
        }
        vendre(z, k - 1);
        boot();
        break;

    case (5):
        system(" color d");
        cout << "\n\n Thank you ^__^ ";
        option = 111;
        break;
    }
}

main()
{
    system("color f9");

    cout << "        \t classifing the products available\n\n";
    Sleep(1500);
    boot();
}