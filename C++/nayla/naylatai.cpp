#include <iostream>

using namespace std;

struct Siswa
{
    string nama;
    int uts;
    int uas;
    int harian;
};
Siswa siswa[100];
int nilai_akhir[100];
int jumlahSiswa;

int nilAkhir(int i)
{
    nilai_akhir[i] = siswa[i].uts * 0.4 + siswa[i].uas * 0.4 + siswa[i].harian * 0.2;
    return nilai_akhir[i];
}

void tambahSiswa()
{
    cout << "Jumlah Siswa : ";
    cin >> jumlahSiswa;

    for (int i = 0; i < jumlahSiswa; i++)
    {
        cout << "\nMasukkan nama siswa ke-" << i + 1 << "\t\t: ";
        cin.ignore();
        getline(cin, siswa[i].nama);
        cout << "Masukkan nilai UTS siswa ke-" << i + 1 << "\t\t: ";
        cin >> siswa[i].uts;
        cout << "Masukkan nilai UAS siswa ke-" << i + 1 << "\t\t: ";
        cin >> siswa[i].uas;
        cout << "Masukkan nilai Harian siswa ke-" << i + 1 << "\t: ";
        cin >> siswa[i].harian;
    }
}

void daftarSiswa()
{
    cout << "\n\nDaftar Siswa: " << endl;

    for (int i = 0; i < jumlahSiswa; i++)
    {
        cout << "Nama Siswa     : " << siswa[i].nama << endl;
        cout << "Nilai Akhir    : " << nilAkhir(i) << endl
             << endl;
    }
}

int main()
{
    tambahSiswa();
    daftarSiswa();
}