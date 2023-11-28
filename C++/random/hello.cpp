#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main() {

  string username, password;
  string str = "Selamat Datang, Silahkan Login";
  int jabatan, lama_kerja, bonus;

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

  if (username == "a" && password == "a"){

    jabatan:
    system("cls");
    cout << setfill('=') << setw(62) << "" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << "||" << setfill(' ') << setw(12) << "" << "Selamat Datang, " << username << setw(29) << "" << "||" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << setfill(' ') << "||" << setw(58) << "" << "||" << endl;
    cout << setfill('=') << setw(62) << "" << endl;

    cout << "Pilih Jabatan : " << endl;
    cout << "1. Karyawan" << endl;
    cout << "2. Manajer" << endl;
    cout << "3. CEO" << endl;
    cout << "0. Keluar" << endl;
    cout << "Masukkan Jabatan Anda : ";
    cin >> jabatan;

    switch (jabatan) {
    case 4 ... 5:
      cout << "Masukkan Lama Tahun Kerja : ";
      cin >> lama_kerja;
      if (lama_kerja >= 0 && lama_kerja < 5){

        bonus = 1000000 * lama_kerja;
        cout << "Bonus Anda Adalah : " << bonus;
      
      } else if (lama_kerja >= 5 && lama_kerja <= 15){
        
        bonus = 1250000 * lama_kerja;
        cout << "Bonus Anda Adalah : " << bonus;

      } else if (lama_kerja > 15){
        
        bonus = 1500000 * lama_kerja;
        cout << "Bonus Anda Adalah : " << bonus;

      } else {
        
        cout << "Lama Tahun Kerja Tidak Valid!";

      }

      cout << "\n";
      system("pause");
      goto jabatan;

    case 2:
      cout << "Masukkan Lama Tahun Kerja : ";
      cin >> lama_kerja;
      if (lama_kerja >= 0 && lama_kerja < 5){

        bonus = 2000000 * lama_kerja;
        cout << "Bonus Anda Adalah : " << bonus;
      
      } else if (lama_kerja >= 5 && lama_kerja <= 15){
        
        bonus = 3000000 * lama_kerja;
        cout << "Bonus Anda Adalah : " << bonus;

      } else if (lama_kerja > 15){
        
        bonus = 4000000 * lama_kerja;
        cout << "Bonus Anda Adalah : " << bonus;

      } else {
        
        cout << "Lama Tahun Kerja Tidak Valid!";

      }

      cout << "\n";
      system("pause");
      goto jabatan;

    case 3:
      cout << "Masukkan Lama Tahun Kerja : ";
      cin >> lama_kerja;
      if (lama_kerja >= 0 && lama_kerja < 5){

        bonus = 5000000 * lama_kerja;
        cout << "Bonus Anda Adalah : " << bonus;
      
      } else if (lama_kerja >= 5 && lama_kerja <= 15){
        
        bonus = 6000000 * lama_kerja;
        cout << "Bonus Anda Adalah : " << bonus;

      } else if (lama_kerja > 15){
        
        bonus = 7000000 * lama_kerja;
        cout << "Bonus Anda Adalah : " << bonus;

      } else {
        
        cout << "Lama Tahun Kerja Tidak Valid!";

      }

      cout << "\n";
      system("pause");
      goto jabatan;

    case 0:
      break;

    default:
      cout << "Jabatan Tidak Ditemukan!";
      goto jabatan;
    }
  }
}