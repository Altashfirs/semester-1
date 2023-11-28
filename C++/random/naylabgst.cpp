#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

string nama[20], nim[20];
string username, password;
char kelas[20];
float uts[20], uas[20], harian[20], hasil[20];
int pilih, maksimum;

void tampilkanData()
{
    system("CLS");
    cout << "Tampilkan Data : " << endl;
    cout << "#" << setfill('=') << setw(132) << "#";
    cout << setfill(' ');
    cout << "\n|" << setw(19) << left << "Nama"
         << "|";
    cout << setw(19) << left << "NIM"
         << "|";
    cout << setw(19) << left << "Kelas"
         << "|";
    cout << setw(19) << left << "UTS"
         << "|";
    cout << setw(19) << left << "UAS"
         << "|";
    cout << setw(19) << left << "Harian"
         << "|";
    cout << setw(19) << left << "Nilai Akhir"
         << "|\n";
    cout << "#" << setfill('=') << setw(132) << "#";

    for (int i = 0; i < maksimum; i++)
    {
        cout << "\n|" << setfill(' ') << setw(19) << left << nama[i];
        cout << "|" << setfill(' ') << setw(19) << left << nim[i];
        cout << "|" << setfill(' ') << setw(19) << left << kelas[i];
        cout << "|" << setfill(' ') << setw(19) << left << uts[i];
        cout << "|" << setfill(' ') << setw(19) << left << uas[i];
        cout << "|" << setfill(' ') << setw(19) << left << harian[i];
        cout << "|" << setfill(' ') << setw(19) << left << hasil[i] << "|";
    }

    cout << "\n#" << setfill('=') << setw(132) << "#" << endl;
    system("pause");
}

void inputData()
{
    system("cls");
    cout << "Masukkan jumlah mahasiswa yang ingin anda input : ";
    cin >> maksimum;
    for (int i = 0; i < maksimum; i++)
    {
        cout << "\n---INPUT DATA MAHASISWA " << i + 1 << "---\n";
        cin.ignore(1, '\n');
        cout << "Masukkan nama siswa\t: ";
        getline(cin, nama[i]);
        cout << "Masukkan NIM\t\t: ";
        cin >> nim[i];
        cout << "Masukkan kelas\t\t: ";
        cin >> kelas[i];
        cout << "Masukkan nilai UTS\t: ";
        cin >> uts[i];
        cout << "Masukkan nilai UAS\t: ";
        cin >> uas[i];
        cout << "Masukkan nilai Harian\t: ";
        cin >> harian[i];
        hasil[i] = (uts[i] * 0.3) + (uas[i] * 0.3) + (harian[i] * 0.4);
        cout << "Data Mahasiswa 1 Berhasil Tersimpan!" << endl;
    }
}

void menu()
{
    int pilih;
    bool ulang = true;

    do
    {
        cout << setfill(' ');
        system("cls");
        cout << "#" << setfill('=') << setw(40) << "#" << endl;
        cout << "|" << setfill(' ') << setw(25) << "Data Mahasiswa" << setfill(' ') << setw(15) << "|" << endl;
        cout << "|" << setfill('=') << setw(40) << "|" << endl;
        cout << "|" << setfill(' ') << setw(23) << "1. Input Data Mahasiswa" << setfill(' ') << setw(17) << "|" << endl;
        cout << "|" << setfill(' ') << setw(26) << "2. Tampilkan Data Mahasiswa" << setfill(' ') << setw(13) << "|" << endl;
        cout << "|" << setfill(' ') << setw(9) << "0. Keluar" << setfill(' ') << setw(31) << "|" << endl;
        cout << "#" << setfill('=') << setw(40) << "#" << endl;
        cout << "Pilih Menu : ";
        cin >> pilih;
        cin.ignore();

        switch (pilih)
        {
        case 1:
            inputData();
            break;

        case 2:
            tampilkanData();
            break;

        case 0:
            ulang = false;
            break;

        default:
            ulang = false;
            break;
        }
    } while (ulang);
}

bool login(string username, string password)
{
    if (username == "akbar" && password == "bar")
    {
        return true;
    }
    else
    {
        cout << "Username atau Password Salah\n\n";
        return false;
    }
}

int main()
{
    string uname, pwd;
    system("cls");
    do
    {
        cout << "---------LOGIN---------" << endl;
        cout << "Masukkan Username : ";
        getline(cin, uname);
        cout << "Masukkan Password : ";
        getline(cin, pwd);
    } while (!login(uname, pwd));
    menu();
}
