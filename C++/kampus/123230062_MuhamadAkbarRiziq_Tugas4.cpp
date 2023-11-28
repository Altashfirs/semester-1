#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

// Fungsi merubah string menjadi huruf kecil
string ToLowercase(const string& str) {
    string lowercaseStr = str;

    // Ubah setiap karakter dari string menjadi huruf kecil
    for (char& c : lowercaseStr) {
        c = tolower(c);
    }

    return lowercaseStr;
}

int main() {

  string username, password, jabatan;
  int lama_kerja, bonus;

// Menampilkan selamat datang
  cout << setfill('=') << setw(62) << "" << endl;
  cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
  cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
  cout << "||" << setfill(' ') << setw(12) << "" << "Selamat Datang, Silahkan Login" << setw(16) << "" << "||" << endl;
  cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
  cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
  cout << setfill('=') << setw(62) << "" << endl;

// User menginput username dan password
  cout << "Username : ";
  getline(cin, username);
  cout << "Password : ";
  getline(cin, password);

  // Mengecek apakah username yang dimasukkan benar atau salah
  if (username == "akbar riziq" && password == "akbar"){

    // Menampilkan selamat datang jika user berhasil login
    cout << setfill('=') << setw(62) << "" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << "||" << setfill(' ') << setw(12) << "" << "Selamat Datang, " << username << setw(19) << "" << "||" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << setfill('=') << setw(62) << "" << endl;

    // User memilih jabatannya
    cout << "Pilih Jabatan : " << endl;
    cout << "- Karyawan" << endl;
    cout << "- Manajer" << endl;
    cout << "- CEO" << endl;
    cout << "Masukkan Jabatan Anda : ";
    getline(cin, jabatan);

    // Mengecek apakah user memilih karyawan
    if (ToLowercase(jabatan) == "karyawan") {
        
        // User Menginput lamanya tahun kerja
        cout << "Masukkan Lama Tahun kerja Anda : ";
        cin >> lama_kerja;

        // Menghitung bonus karyawan berdasarkan lama kerja
        switch (lama_kerja)
        {
            // bonus jika lama kerja 0-4 tahun
            case 0 ... 4:
                cout << "Bonus Anda Adalah : " << 1000000 * lama_kerja << endl;
                break;
            // bonus jika lama kerja 5-15 tahun
            case 5 ... 15:
                cout << "Bonus Anda Adalah : " << 1250000 * lama_kerja << endl;
                break;
            // bonus jika lama kerja 16-100 tahun
            case 16 ... 100:
                cout << "Bonus Anda Adalah : " << 1500000 * lama_kerja << endl;
                break;
            // error handling jika angka yang diinput berbeda
            default:
                cout << "Tahun Kerja Anda Tidak Valid!";
                break;
        }
    // mengecek apakah user memilih manajer
    } else if (ToLowercase(jabatan) == "manajer") {
        // user menginput lamanya tahun kerja
        cout << "Masukkan Lama Tahun kerja Anda : ";
        cin >> lama_kerja;

        // menghitung bonus manajer berdasarkan lama kerja
        switch (lama_kerja)
        {
            // bonus jika lama kerja 0-4 tahun
            case 0 ... 4:
                cout << "Bonus Anda Adalah : " << 2000000 * lama_kerja << endl;
                break;
            // bonus jika lama kerja 5-15 tahun
            case 5 ... 15:
                cout << "Bonus Anda Adalah : " << 3000000 * lama_kerja << endl;
                break;
            // bonus jika lama kerja 16-100 tahun
            case 16 ... 100:
                cout << "Bonus Anda Adalah : " << 4000000 * lama_kerja << endl;
                break;
            // error handling jika angka yang diinput tidak valid
            default:
                cout << "Tahun Kerja Anda Tidak Valid!";
                break;
        }
        // mengecek apakah user memilih ceo
    } else if (ToLowercase(jabatan) == "ceo") {
        // user menginput lama kerjanya
        cout << "Masukkan Lama Tahun kerja Anda : ";
        cin >> lama_kerja;

        // menghitung bonus ceo berdaasrkan lama kerja
        switch (lama_kerja)
        {
            // bonus jika lama kerja 0-4 tahun
            case 0 ... 4:
                cout << "Bonus Anda Adalah : " << 5000000 * lama_kerja << endl;
                break;
            // bonus jika lama kerja 5-15 tahun
            case 5 ... 15:
                cout << "Bonus Anda Adalah : " << 6000000 * lama_kerja << endl;
                break;
            // bonus jika lama kerja 16-100 tahun
            case 16 ... 100:
                cout << "Bonus Anda Adalah : " << 7000000 * lama_kerja << endl;
                break;
            // error handling jika angka yang diinput tidak valid
            default:
                cout << "Tahun Kerja Anda Tidak Valid!";
                break;
        }
    } else{
        // error handling jika jabatan yang diinput tidak ada
        cout << "Jabatan Tidak Ditemukan";
    }
  } else{
    // error handling jika username atau password salah
    cout << "Username atau Password Salah";
  }
  
}
