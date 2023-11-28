#include <iostream>

using namespace std;

// Fungsi Menghitung Bilangan Ganjil 10 - 150
void ganjil()
{
    char pilih;
    int jumlah = 0;

    do
    {
        for (int i = 10; i <= 150; i++)
        {
            if (i % 2 == 1)
            {
                cout << i << " adalah ganjil" << endl;
                jumlah++;
            }
        }
        cout << "Bilangan ganjil berjumlah " << jumlah << endl << endl;
        cout << "Apakah anda ingin mengulang (y/n)? ";
        cin >> pilih;
        cout << endl;
        jumlah = 0;
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

int main()
{
    login();
}