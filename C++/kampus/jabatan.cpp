#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

string ToLowercase(const string& str) {
    string lowercaseStr = str;

    for (char& c : lowercaseStr) {
        c = tolower(c);
    }

    return lowercaseStr;
}

int main() {

  string username, password, jabatan;
  int lama_kerja, bonus;

  cout << setfill('=') << setw(62) << "" << endl;
  cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
  cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
  cout << "||" << setfill(' ') << setw(12) << "" << "Selamat Datang, Silahkan Login" << setw(16) << "" << "||" << endl;
  cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
  cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
  cout << setfill('=') << setw(62) << "" << endl;

  cout << "Username : ";
  getline(cin, username);
  cout << "Password : ";
  getline(cin, password);

  if (username == "akbar riziq" && password == "akbar"){

    jabatan:
    system("cls");
    cout << setfill('=') << setw(62) << "" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << "||" << setfill(' ') << setw(12) << "" << "Selamat Datang, " << username << setw(19) << "" << "||" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << setfill('=') << setw(62) << "" << endl;

    cout << "Pilih Jabatan : " << endl;
    cout << "- Karyawan" << endl;
    cout << "- Manajer" << endl;
    cout << "- CEO" << endl;
    cout << "Masukkan Jabatan Anda : ";
    getline(cin, jabatan);

    if (ToLowercase(jabatan) == "karyawan") {
        cout << "Masukkan Lama Tahun kerja Anda : ";
        cin >> lama_kerja;

        switch (lama_kerja)
        {
            case 0 ... 4:
                cout << "Bonus Anda Adalah : " << 1000000 * lama_kerja << endl;
                break;
            case 5 ... 15:
                cout << "Bonus Anda Adalah : " << 1250000 * lama_kerja << endl;
                break;
            case 16 ... 100:
                cout << "Bonus Anda Adalah : " << 1500000 * lama_kerja << endl;
                break;
        
            default:
                cout << "Tahun Kerja Anda Tidak Valid!";
                break;
        }
    } else if (ToLowercase(jabatan) == "manajer") {
        cout << "Masukkan Lama Tahun kerja Anda : ";
        cin >> lama_kerja;

        switch (lama_kerja)
        {
            case 0 ... 4:
                cout << "Bonus Anda Adalah : " << 2000000 * lama_kerja << endl;
                break;
            case 5 ... 15:
                cout << "Bonus Anda Adalah : " << 3000000 * lama_kerja << endl;
                break;
            case 16 ... 100:
                cout << "Bonus Anda Adalah : " << 4000000 * lama_kerja << endl;
                break;
        
            default:
                cout << "Tahun Kerja Anda Tidak Valid!";
                break;
        }
    } else if (ToLowercase(jabatan) == "ceo") {
        cout << "Masukkan Lama Tahun kerja Anda : ";
        cin >> lama_kerja;

        switch (lama_kerja)
        {
            case 0 ... 4:
                cout << "Bonus Anda Adalah : " << 5000000 * lama_kerja << endl;
                break;
            case 5 ... 15:
                cout << "Bonus Anda Adalah : " << 6000000 * lama_kerja << endl;
                break;
            case 16 ... 100:
                cout << "Bonus Anda Adalah : " << 7000000 * lama_kerja << endl;
                break;
        
            default:
                cout << "Tahun Kerja Anda Tidak Valid!";
                break;
        }
    } else{

        cout << "Jabatan Tidak Ditemukan";
    }
  } else{
    cout << "Username atau Password Salah";
  }
  
}