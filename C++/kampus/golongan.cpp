#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

string ToLowercase(const string& str) {
    string lowercaseStr = str;

    for (char& c : lowercaseStr) {
        c = tolower(c);
    }

    return lowercaseStr;
}

int main() {
    int jumlahMurid;
    cout << "Masukkan jumlah data yang ingin anda tambahkan: ";
    cin >> jumlahMurid;
    cin.ignore();
    system("cls");

    vector<string> nama(jumlahMurid), pddk(jumlahMurid), golongan(jumlahMurid), pendidikan(jumlahMurid);
    vector<int> umur(jumlahMurid);
    vector<char> jk(jumlahMurid);

    for (int i = 0; i < jumlahMurid; i++) {
        cout << "\n---INPUT DATA " << i + 1 << "---\n";
        cout << "Masukkan Nama\t\t\t: ";
        getline(cin, nama[i]);
        cout << "Masukkan Umur\t\t\t: ";
        cin >> umur[i];
        cout << "Masukkan Jenis Kelamin (p/l)\t: ";
        cin >> jk[i];
        cout << "Masukkan Pendidikan Terakhir\t: ";
        cin >> pddk[i];

        if (tolower(jk[i]) == 'p' && umur[i] >= 20 && ToLowercase(pddk[i]) == "s1" ) {
            golongan[i] = "Golongan A";
        } else if (jk[i] == 'p' && umur[i] >= 30 && ToLowercase(pddk[i]) == "sma" ) {
            golongan[i] = "Golongan B";
        } else if (jk[i] == 'l' && umur[i] <= 45 && ToLowercase(pddk[i]) == "s2" ) {
            golongan[i] = "Golongan C";
        } else if (jk[i] == 'l' && umur[i] >= 20 && ToLowercase(pddk[i]) == "smp" ) {
            golongan[i] = "Golongan D";
        } else { 
            golongan[i] = "Golongan E";
        }
        cin.ignore();
    }

    system("cls");
    cout << "Tampilkan Data Golongan : " << endl;
    cout << "#" << setfill('=') << setw(84) <<  "" << "#";
    cout << setfill(' ');
    cout << "\n|" << setw(16) << left << "Nama"
         << "|";
    cout << setw(16) << left << "Umur" << "|";
    cout << setw(16) << left << "Jenis Kelamin" << "|";
    cout << setw(16) << left << "Pendidikan" << "|";
    cout << setw(16) << left << "Golongan" << "|" << endl;
    cout << "#" << setfill('=') << setw(84) <<  "" << "#";
    cout << setfill(' ');

    for (int i = 0; i < jumlahMurid; i++)
    {
        cout << "\n|" << setw(16) << left << nama[i];
        cout << "|" << setw(16) << left << umur[i];
        cout << "|" << setw(16) << left << jk[i];
        cout << "|" << setw(16) << left << pddk[i];
        cout << "|" << setw(16) << left << golongan[i] << "|";
            }
            cout << "\n#" << setfill('=') << setw(84) <<  "" << "#";
    return 0;
}