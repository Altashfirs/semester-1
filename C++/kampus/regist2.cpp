#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int jumlahMurid;
    cout << "Masukkan jumlah murid yang ingin anda tambahkan: ";
    cin >> jumlahMurid;
    cin.ignore(); // Menggunakan cin.ignore() untuk membersihkan newline dari input sebelumnya

    vector<string> nama(jumlahMurid);
    vector<int> nim(jumlahMurid);
    vector<char> kelas(jumlahMurid);
    vector<float> uts(jumlahMurid), uas(jumlahMurid), harian(jumlahMurid), hasil(jumlahMurid);

    for (int i = 0; i < jumlahMurid; i++) {
        cout << "---INPUT DATA MAHASISWA " << i + 1 << "---\n";
        cout << "Masukkan nama siswa: ";
        getline(cin, nama[i]);
        cout << "Masukkan NIM: ";
        cin >> nim[i];
        cout << "Masukkan kelas: ";
        cin >> kelas[i];
        cout << "Masukkan nilai UTS: ";
        cin >> uts[i];
        cout << "Masukkan nilai UAS: ";
        cin >> uas[i];
        cout << "Masukkan nilai Harian: ";
        cin >> harian[i];
        hasil[i] = (uts[i] * 0.3) + (uas[i] * 0.3) + (harian[i] * 0.4);
        cin.ignore(); // Menggunakan cin.ignore() untuk membersihkan newline dari input sebelumnya

        if (!nama[i].empty() && !kelas[i] == 0 && !uts[i] == 0 && !uas[i] == 0 && !harian[i] == 0) {
            cout << "Data Mahasiswa " << i + 1 << " Berhasil Tersimpan!\n\n";
        }

    }

            cout << "Tampilkan Data : " << endl;
            cout << "#" << setfill('=') << setw(121) << "#";
            cout << setfill(' ');
            cout << "\n|" << setw(16) << left << "Nama" << "|";
            cout <<  setw(16) << left << "NIM" << "|";
            cout <<  setw(16) << left << "Kelas" << "|";
            cout <<  setw(16) << left << "UTS" << "|";
            cout <<  setw(16) << left << "UAS" << "|";
            cout <<  setw(16) << left << "Harian" << "|";
            cout <<  setw(16) << left << "Nilai Akhir" << "|\n";
            cout << "#" << setfill('=') << setw(121) << "#";
            cout << setfill(' ');

            for (int i = 0; i < jumlahMurid; i++) {
                cout << "\n|" << setw(16) << left << nama[i];
                cout << "|" << setw(16) << left << nim[i];
                cout << "|" << setw(16) << left << kelas[i];
                cout << "|" << setw(16) << left << uts[i];
                cout << "|" << setw(16) << left << uas[i];
                cout << "|" << setw(16) << left << harian[i];
                cout << "|" << setw(16) << left << hasil[i] << "|";
            }
            cout << "\n#" << setfill('=') << setw(121) << "#";

    return 0;
}