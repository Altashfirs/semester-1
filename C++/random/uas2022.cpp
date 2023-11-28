#include <iostream>
#include <vector>

using namespace std;

int jumlahTim;
vector<string> namaTim(jumlahTim);
vector<string> asalTim(jumlahTim);

vector<string> inputTim(int jumlahTim)
{

    for (int i = 0; i < jumlahTim; i++)
    {

        cout << "Tim " << i + 1 << endl;
        cout << "Nama Tim = ";
        cin >> namaTim[i];
        cout << "Asal Tim = ";
        cin >> asalTim[i];
        cout << endl;
    }
}

string tampilTim()
{

    for (int i = 0; i < jumlahTim; i++)
    {
        cout << "Tim " << i + 1 << endl;
        cout << "Nama Tim = " << namaTim[i] << endl;
        cout << "Asal Tim = " << namaTim[i] << endl;
        cout << endl;
    }
}

int main()
{

    int menu;
    cout << "Masukkan jumlah tim = ";
    cin >> jumlahTim;

menu:
    cout << "Pilihan menu\n1. Input Tim\n2. Cek Tim\nMasukkan angka = ";
    cin >> menu;

    switch (menu)
    {
    case 1:
        inputTim(jumlahTim);
        cout << endl;
        system("pause");
        goto menu;

    case 2:
        tampilTim();
        cout << endl;
        system("pause");
        goto menu;

    default:
        break;
    }
}