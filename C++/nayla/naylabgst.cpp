#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

const int MAX_MAHASISWA = 20;

struct Mahasiswa
{
    string nama;
    string nim;
    string jurusan;
    float ipk;
};

Mahasiswa dataMahasiswa[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void inputData()
{
    cout << "Masukkan jumlah mahasiswa = ";
    cin >> jumlahMahasiswa;
    system("cls");
    for (int a = 0; a < jumlahMahasiswa; a++)
    {
        cout << "Nama : ";
        cin >> dataMahasiswa[a].nama;
        cout << "Nim : ";
        cin >> dataMahasiswa[a].nim;
        cout << "Jurusan : ";
        cin >> dataMahasiswa[a].jurusan;
        cout << "Nilai IPK : ";
        cin >> dataMahasiswa[a].ipk;
    }
}

void viewData()
{
    for (int a = 0; a < jumlahMahasiswa; a++)
    {
        cout << "Nama : " << dataMahasiswa[a].nama << endl;
        cout << "Nim : " << dataMahasiswa[a].nim << endl;
        cout << "Jurusan : " << dataMahasiswa[a].jurusan << endl;
        cout << "Nilai IPK : " << dataMahasiswa[a].ipk << endl;
    }
}

void menu()
{
    int menu;
    int rata;
    do
    {
        cout << "Menu Program" << endl;
        cout << "1. Input Data Mahasiswa" << endl;
        cout << "2. Tampilan Data" << endl;
        cout << "3. Hitung Rata-Rata IPK" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Menu : ";
        cin >> menu;

        switch (menu)
        {
        case 1:
            inputData();
            break;

        case 2:
            viewData();
            break;

        case 3:
            rata = (dataMahasiswa[0].ipk + dataMahasiswa[1].ipk) / 2;
            cout << "Rata - Rata IPK : ";
            cout << rata << endl;
            break;

        case 0:
            cout << "Program Keluar";
            break;
        }

    } while (menu != 0);
}

int main()
{
    system("cls");
    menu();

    return 0;
}
