// Arrays Program

#include <iostream>
using namespace std;

int test[100];
int x, i, p;
int cari, posisi;
char yn, yt;

main()
{
awal:
    cout << endl;
    cout << "Input Array";
    cout << endl;
    cout << endl;
    cout << "Masukkan Jumlah Data : ";
    cin >> x;
    cout << endl;

    for (i = 0; i <= x; i++)
    {

        cout << "Masukkan Data Ke " << i << " : ";
        cin >> test[i];
    }

    cout << endl;
    cout << "Data Yang Dimasukkan : ";
    for (int i = 0; i <= x; i++)
    {

        cout << " " << test[i];
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Lanjut Mencari Index (Y/N) = ";
    cin >> yn;

    if (yn == 'Y' || yn == 'y')
    {
        cout << endl;
        cout << "Masukkan Data Yang Ingin Dicari = ";
        cin >> cari;
        for (int i = 0; i <= x; i++)
        {
            if (test[i] == cari)
            {
                posisi = i;
            }
        }

        cout << endl;
        cout << "Data Yang Dicari Ada Pada Index Ke = " << posisi;
    }

    else
    {
        cout << "Terima Kasih !";
    }

    cout << endl;
    cout << endl;
    cout << "Apakah Anda Ingin Mengulang Program (Y/T) = ";
    cin >> yt;

    if (yt == 'Y' || yt == 'y')
    {
        goto awal;
    }
    if (yt == 'T' || yt == 't')
    {
        goto selesai;
    }

selesai:
    cout << endl
         << endl;
    cout << "Terima Kasih !";
}