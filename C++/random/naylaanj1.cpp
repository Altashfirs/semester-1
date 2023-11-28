#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

string nama[20], nim[20];
string username, password;
char kelas[20];
float uts[20], uas[20], harian[20], hasil[20];
int pilih;

void menu()
{
    do
    {
        system("cls");
        cout << "#" << setfill('=') << setw(40) << "#" << endl;
        cout << "|" << setfill(' ') << setw(25) << "Data Mahasiswa" << setw(15) << "|" << endl;
        cout << "|" << setfill('=') << setw(40) << "|" << endl;
        cout << "|" << setfill(' ') << setw(23) << "1. Input Data Mahasiswa" << setw(17) << "|" << endl;
        cout << "|" << setfill(' ') << setw(26) << "2. Tampilkan Data Mahasiswa" << setw(13) << "|" << endl;
        cout << "|" << setfill(' ') << setw(9) << "0. Keluar" << setw(31) << "|" << endl;
        cout << "#" << setfill('=') << setw(40) << "#" << endl;
        cout << "Pilih Menu : ";
        cin >> pilih;
        cin.ignore();
    } while (true);
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

    system("cls");
    cout << "---------LOGIN---------" << endl;
    cout << "Masukkan Username : ";
    getline(cin, username);
    cout << "Masukkan Password : ";
    getline(cin, password);

    if (username == "a" && password == "a")
    {
        cout << "Login Berhasil!" << endl;
        cout << "Press any key to continue . . . ";
        getch();

        system("cls");
        cout << "#" << setfill('=') << setw(40) << "#" << endl;
        cout << "|" << setfill(' ') << setw(25) << "Data Mahasiswa" << setw(15) << "|" << endl;
        cout << "|" << setfill('=') << setw(40) << "|" << endl;
        cout << "|" << setfill(' ') << setw(23) << "1. Input Data Mahasiswa" << setw(17) << "|" << endl;
        cout << "|" << setfill(' ') << setw(26) << "2. Tampilkan Data Mahasiswa" << setw(13) << "|" << endl;
        cout << "|" << setfill(' ') << setw(9) << "0. Keluar" << setw(31) << "|" << endl;
        cout << "#" << setfill('=') << setw(40) << "#" << endl;
        cout << "Pilih Menu : ";
        cin >> pilih;
        cin.ignore();

        switch (pilih)
        {
        case 1:
            system("cls");
            cout << "---INPUT DATA MAHASISWA 1---\n";
            cout << "Masukkan nama siswa\t: ";
            getline(cin, nama[0]);
            cout << "Masukkan NIM\t\t: ";
            cin >> nim[0];
            cout << "Masukkan kelas\t\t: ";
            cin >> kelas[0];
            cout << "Masukkan nilai UTS\t: ";
            cin >> uts[0];
            cout << "Masukkan nilai UAS\t: ";
            cin >> uas[0];
            cout << "Masukkan nilai Harian\t: ";
            cin >> harian[0];
            hasil[0] = (uts[0] * 0.3) + (uas[0] * 0.3) + (harian[0] * 0.4);
            cout << "Data Mahasiswa 1 Berhasil Tersimpan!";
            cin.ignore();

            cout << "\n\n---INPUT DATA MAHASISWA 2---\n";
            cout << "Masukkan nama siswa\t: ";
            getline(cin, nama[1]);
            cout << "Masukkan NIM\t\t: ";
            cin >> nim[1];
            cout << "Masukkan kelas\t\t: ";
            cin >> kelas[1];
            cout << "Masukkan nilai UTS\t: ";
            cin >> uts[1];
            cout << "Masukkan nilai UAS\t: ";
            cin >> uas[1];
            cout << "Masukkan nilai Harian\t: ";
            cin >> harian[1];
            hasil[1] = (uts[1] * 0.3) + (uas[1] * 0.3) + (harian[1] * 0.4);
            cout << "Data Mahasiswa 2 Berhasil Tersimpan!";
            cin.ignore();

            cout << "\n\nPress any key to continue . . .";
            getch();
            break;

        case 2:
            system("CLS");
            cout << "Tampilkan Data : " << endl;
            cout << "#" << setfill('=') << setw(132) << "#"
                 << "##";
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
            cout << setfill(' ') << "##";

            cout << "\n|" << setw(19) << left << nama[0];
            cout << "|" << setw(19) << left << nim[0];
            cout << "|" << setw(19) << left << kelas[0];
            cout << "|" << setw(19) << left << uts[0];
            cout << "|" << setw(19) << left << uas[0];
            cout << "|" << setw(19) << left << harian[0];
            cout << "|" << setw(19) << left << hasil[0] << "|";

            cout << "\n|" << setw(19) << nama[1];
            cout << "|" << setw(19) << nim[1];
            cout << "|" << setw(19) << kelas[1];
            cout << "|" << setw(19) << uts[1];
            cout << "|" << setw(19) << uas[1];
            cout << "|" << setw(19) << harian[1];
            cout << "|" << setw(19) << hasil[1] << "|";
            cout << "\n#" << setfill('=') << setw(132) << "#"
                 << "##" << endl;
            system("pause");
            break;

        default:
            break;
        }
    }
    else
    {
        cout << "Password atau username salah";
        getch();
    }
}
