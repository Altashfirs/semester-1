#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nama;
    float c, f, r, k;

    cout << "Masukkan nama : ";
    getline(cin, nama);
    printf("Masukkan suhu dalam celcius : ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;
    r = c * 4 / 5;
    k = c + 273.15;

    system("cls");
    printf("Hey, %s\n", nama.c_str());
    printf("\nCelcius\t\t=\t%.2f\n", c);
    cout << setfill('=') << setw(35);
    cout << "\n";
    printf("Fahrenheit\t|\t%.2f\n", f);
    printf("Reamur\t\t|\t%.2f\n", r);
    printf("Kelvin\t\t|\t%.2f\n", k);
    cout << setfill('=') << setw(35);
    cout << "";
}