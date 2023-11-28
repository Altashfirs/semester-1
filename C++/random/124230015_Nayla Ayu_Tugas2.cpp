#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

char index(int x) {
    if (x > 85){
        return 'A';
    } else if (x >= 75 && x <= 84){
        return 'B';
    } else if (x >= 65 && x <= 74){
        return 'C';
    } else if (x >= 50 && x <= 64){
        return 'D';
    } else{
        return 'E';
    }
}


int main() {
    string nama[2], nim[2];
    string username, password;
    char kelas[2] = {' ', ' '};
    float uts[2] = {0}, uas[2] = {0}, harian[2] = {0}, hasil[2] = {0};
    int pilih;

    cout << "---------LOGIN---------" << endl;
    cout << "Masukkan Username : ";
    getline(cin, username);
    cout << "Masukkan Password : ";
    getline(cin, password);

    if (username == "a" && password == "a"){
        cout << "Login Berhasil!" << endl;
        cout << "Press any key to continue . . . ";
        getch();

        tampilan_menu:
        system("cls");
        cout << "#" << setfill('=') << setw(40) << left << "" << "#" << endl;
        cout << "|" << setfill(' ') << setw(40) << left << "Data Mahasiswa" << "|" << endl;
        cout << "|" << setfill('=') << setw(40) << left << "" << "|" << endl;
        cout << "|" << setfill(' ') << setw(40) << left << "1. Input Data Mahasiswa" << "|" << endl;
        cout << "|" << setfill(' ') << setw(40) << left << "2. Tampilkan Data Mahasiswa" << "|" << endl;
        cout << "|" << setfill(' ') << setw(40) << left << "0. Keluar" << "|" << endl;
        cout << "#" << setfill('=') << setw(40) << left << "" << "#" << endl;
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
            goto tampilan_menu;

        case 2:
            system("CLS");
            cout << "Tampilkan Data : " << endl;
            cout << "#" << setfill('=') << setw(135) << "" << "#" << endl;
            cout << setfill(' ');
            cout << "|" << setw(16) << left << "Nama"
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
                << "|";
            cout << setw(16) << left << "Index"
                << "|\n";
            cout << "#" << setfill('=') << setw(135) << "" << "#";
            cout << setfill(' ');

            cout << "\n|" << setw(16) << left << nama[0];
            cout << "|" << setw(16) << left << nim[0];
            cout << "|" << setw(16) << left << kelas[0];
            cout << "|" << setw(16) << left << uts[0];
            cout << "|" << setw(16) << left << uas[0];
            cout << "|" << setw(16) << left << harian[0];
            cout << "|" << setw(16) << left << hasil[0];
            cout << "|" << setw(16) << left << index(hasil[0]) << "|";
            
            cout << "\n|" << setw(16) << left << nama[1];
            cout << "|" << setw(16) << left << nim[1];
            cout << "|" << setw(16) << left << kelas[1];
            cout << "|" << setw(16) << left << uts[1];
            cout << "|" << setw(16) << left << uas[1];
            cout << "|" << setw(16) << left << harian[1];
            cout << "|" << setw(16) << left << hasil[1];
            cout << "|" << setw(16) << left << index(hasil[1]) << "|";
            cout << "\n#" << setfill('=') << setw(135) << "" << "#";
            
            cout << "\n\nPress any key to continue . . .";
            getch();
            goto tampilan_menu;
            
            
        default:
            break;
        }
    }
    
}


