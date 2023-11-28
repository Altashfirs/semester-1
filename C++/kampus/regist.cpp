#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nama[2];
    string nim[2];
    char kelas[2];
    float uts[2], uas[2], harian[2], hasil[2];

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
        cin.ignore(); // Menggunakan cin.ignore() untuk membersihkan newline dari input sebelumnya

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
        cin.ignore(); // Menggunakan cin.ignore() untuk membersihkan newline dari input sebelumnya

        system("CLS");
        cout << "Tampilkan Data : " << endl;
        cout << "#" << setfill('=') << setw(121) << "#";
        cout << setfill(' ');
        cout << "\n|" << setw(16) << left << "Nama"
             << "|";
        cout << setw(16) << left << "NIM"
             << "|";
        cout << setw(16) << left << "Kelas"
             << "|";
        cout << setw(16) << left << "UTS"
             << "|";
        cout << setw(16) << left << "UAS"
             << "|";
        cout << setw(16) << left << "Harian"
             << "|";
        cout << setw(16) << left << "Nilai Akhir"
             << "|\n";
        cout << "#" << setfill('=') << setw(121) << "#";
        cout << setfill(' ');

        cout << "\n|" << setw(16) << left << nama[0];
        cout << "|" << setw(16) << left << nim[0];
        cout << "|" << setw(16) << left << kelas[0];
        cout << "|" << setw(16) << left << uts[0];
        cout << "|" << setw(16) << left << uas[0];
        cout << "|" << setw(16) << left << harian[0];
        cout << "|" << setw(16) << left << hasil[0] << "|";

        cout << "\n|" << setw(16) << left << nama[1];
        cout << "|" << setw(16) << left << nim[1];
        cout << "|" << setw(16) << left << kelas[1];
        cout << "|" << setw(16) << left << uts[1];
        cout << "|" << setw(16) << left << uas[1];
        cout << "|" << setw(16) << left << harian[1];
        cout << "|" << setw(16) << left << hasil[1] << "|";
        cout << "\n#" << setfill('=') << setw(121) << "#";

        return 0;
}