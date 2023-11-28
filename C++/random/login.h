#include <iostream>
#include "header.hpp"

using namespace std;

void ganjil()
{
    char pilih;

    do
    {
        for (int i = 10; i <= 150; i++)
        {
            if (i % 2 == 1)
            {
                cout << i << " adalah ganjil" << endl;
            }
        }
        cout << "Apakah anda ingin mengulang? (y/n)";
        cin >> pilih;
        cout << endl;
    } while (pilih != 'n');
}

void login()
{
    string uname, password;
    bool login = false;

    do
    {
        cout << "Masukkan Username : ";
        cin >> uname;
        cout << "Masukkan Password : ";
        cin >> password;

        if (uname == "akbar" && password == "b")
        {
            login = true;
        }
        cout << endl;
    } while (!login);
    ganjil();
}