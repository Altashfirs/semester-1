#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

const int MAX_MAHASISWA = 20;

struct Mahasiswa
{
    string nama;
    string nim;
    char jurusan;
    float uts;
    float uas;
    float harian;
    float hasil;
};

Mahasiswa dataMahasiswa[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

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

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "\n|" << setfill(' ') << setw(19) << left << dataMahasiswa[i].nama;
        cout << "|" << setfill(' ') << setw(19) << left << dataMahasiswa[i].nim;
        cout << "|" << setfill(' ') << setw(19) << left << dataMahasiswa[i].jurusan;
        cout << "|" << setfill(' ') << setw(19) << left << dataMahasiswa[i].ipk;
        cout << "|" << setfill(' ') << setw(19) << left << dataMahasiswa[i].uas;
        cout << "|" << setfill(' ') << setw(19) << left << dataMahasiswa[i].harian;
        cout << "|" << setfill(' ') << setw(19) << left << dataMahasiswa[i].hasil << "|";
    }

    cout << "\n#" << setfill('=') << setw(132) << "#" << endl;
    system("pause");
}

void inputData()
{
    system("cls");
    cout << "Masukkan jumlah mahasiswa yang ingin anda input : ";
    cin >> jumlahMahasiswa;

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "\n---INPUT DATA MAHASISWA " << i + 1 << "---\n";
        cin.ignore(1, '\n');
        cout << "Masukkan nama siswa\t: ";
        getline(cin, dataMahasiswa[i].nama);
        cout << "Masukkan NIM\t\t: ";
        cin >> dataMahasiswa[i].nim;
        cout << "Masukkan kelas\t\t: ";
        cin >> dataMahasiswa[i].kelas;
        cout << "Masukkan nilai UTS\t: ";
        cin >> dataMahasiswa[i].uts;
        cout << "Masukkan nilai UAS\t: ";
        cin >> dataMahasiswa[i].uas;
        cout << "Masukkan nilai Harian\t: ";
        cin >> dataMahasiswa[i].harian;
        dataMahasiswa[i].hasil = (dataMahasiswa[i].uts * 0.3) + (dataMahasiswa[i].uas * 0.3) + (dataMahasiswa[i].harian * 0.4);
        cout << "Data Mahasiswa " << i + 1 << " Berhasil Tersimpan!" << endl;
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

bool login(string &username, string &password)
{
    if (username == "Nayla" && password == "naynay")
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

    return 0;
}
