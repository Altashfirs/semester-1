#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    string username, password;
    char karakter;

    while (true)
    {
        cout << "Masukkan username : ";
        getline(cin, username);
        cout << "Masukkan password : ";
        getline(cin, password); 

        if (username == "akbar" && password == "akbar")
        {
            break;
        }
    }
    cout << "Masukkan karakter : ";
    cin >> karakter;
    if (karakter >= 'A' && karakter <= 'z'){
        cout << karakter << " adalah abjad";
    } else
    {
        cout << karakter << " adalah angka";
    }
    
}