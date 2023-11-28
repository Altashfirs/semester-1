#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string username, password;
    char karakter, huruf;

    cout << "\n" <<  setfill('=') << setw(50) << "\n\n";
    cout << "||" << setfill(' ') << setw(50) << "||" << endl;
    cout << "||" << setw(50) << "||" << endl;
    cout << "||" << setw(25) << "Selamat Datang, Silahkan Login" << setw(25) <<  "||" << endl;
    cout << "||" << setw(50) << "||" << endl;
    cout << "||" << setw(50) << "||" << endl;
    cout << setfill('=') << setw(50) << endl;

    cout << "\nMasukkan Username : ";getline(cin,username);
    cout << "Masukkan Password : ";getline(cin, password);

    system("cls");
    if (username == "a" && password == "a"){
        cout << "Selamat Datang " << username << endl;
        cout << "Masukkan Karakter : ";cin >> karakter;


        if (karakter >= 'A' && karakter <= 'z')
        {
            cout << karakter << " adalah sebuah alphabet" << endl;
            }
            else if (karakter >= '1' && karakter <= '9')
            {
                cout << karakter << " adalah sebuah angka" << endl;
            }
            else
            {
                cout << karakter << " bukan angka atau karakter" << endl;
            }
        return 0;
    }
}