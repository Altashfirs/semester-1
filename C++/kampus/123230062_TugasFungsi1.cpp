#include <iostream>

using namespace std;

void volTabung()
{
    system("cls");
    const float phi = 3.14;
    float r, t, volTabung;

    cout << "Masukkan jari-jari = ";
    cin >> r;
    cout << "Masukkan tinggi = ";
    cin >> t;
    volTabung = phi * r * r * t;
    cout << "Volume Tabung adalah " << volTabung;
    cout << endl;
    system("pause");
}

void volKerucut()
{
    system("cls");
    const float phi = 3.14;
    float r, t, kerucut;

    cout << "Masukkan jari-jari = ";
    cin >> r;
    cout << "Masukkan tinggi = ";
    cin >> t;
    kerucut = 0.33333 * phi * r * r * t;
    cout << "Volume Kerucut adalah " << kerucut;
    cout << endl;
    system("pause");
}

void segitiga()
{
    system("cls");
    float a, t, luas, keliling;
    int s1, s2, s3;

    cout << "Masukkan alas = ";
    cin >> a;
    cout << "Masukkan tinggi = ";
    cin >> t;
    luas = 0.5 * a * t;
    cout << "Luas segitiga adalah = " << luas << endl
         << endl;

    cout << "Masukkan sisi 1 = ";
    cin >> s1;
    cout << "Masukkan sisi 2 = ";
    cin >> s2;
    cout << "Masukkan sisi 3 = ";
    cin >> s3;
    keliling = s1 + s2 + s3;
    cout << "Keliling segitiga adalah = " << keliling << endl;
    cout << endl;
    system("pause");
}

void PersegiPanjang()
{
    system("cls");
    float p, l, luas, keliling;

    cout << "Masukkan Panjang = ";
    cin >> p;
    cout << "Masukkan Lebar = ";
    cin >> l;
    keliling = 2 * (p + l);
    luas = p * l;
    cout << "\nKeliling Persegi Panjang adalah " << keliling << endl;
    cout << "Luas Persegi Panjang adalah " << luas << endl
         << endl;
    system("pause");
}

void menu()
{
    int pilih;
    char ulang;
    do
    {
        system("cls");
        cout << "Pilih Menu:\n1.Volume Tabung\n2.Volume Kerucut\n3.Keliling dan Luas Segitiga\n4.Keliling dan Luas Persegi Panjang\n5.Keluar\nPilih angka (1-5): ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            volTabung();
            break;
        case 2:
            volKerucut();
            break;
        case 3:
            segitiga();
            break;
        case 4:
            PersegiPanjang();
            break;
        case 5:
            break;
        default:
            cout << "Angka yang anda pilih bukan 1-5!";
            cout << "\nApakah anda ingin mengulang (y/n)? ";
            cin >> ulang;
            if (ulang == 'y')
            {
                pilih = 0;
            }
            else
            {
                pilih = 5;
            }
        }
    } while (pilih != 5);
}

bool login(string username, string password)
{
    if (username == "akbar" && password == "bar")
    {
        return true;
    }
    else
    {
        cout << "Username atau Password Salah\n\n";
        return false;
    }
}

int main()
{
    string uname, pwd;
    system("cls");

    do
    {
        cout << "Masukkan username: ";
        cin >> uname;
        cout << "Masukkan password: ";
        cin >> pwd;
    } while (!login(uname, pwd));
    menu();
}
