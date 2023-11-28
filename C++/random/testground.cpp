#include <iostream>
#include <iomanip>

using namespace std;
void batasAngka(int &p);
void batasAngka(int &p1, int &p2);
void batasAngka(int &p1, int &p2, int &p3, int &p4);

void warnaTetradComplementary(int warna)
{
    int p1, p2;
    p1 = warna + 4;
    p2 = warna + 8;

    batasAngka(p1, p2);

    cout << "Perpaduan Warna Triadic Complementary Dengan Warna Nomor: " << p1 << " dan " << p2 << endl;
}

void warnaTriadicComplementary(int warna)
{
    int p1, p2;

    p1 = warna + 4;
    p2 = warna + 8;

    batasAngka(p1, p2);

    cout << "Perpaduan Warna Triadic Complementary Dengan Warna Nomor: " << p1 << " dan " << p2 << endl;
}

void warnaSplitComplementary(int warna)
{
    int p1, p2, p3, p4;

    p1 = warna + 2;
    p2 = warna + 7;
    p3 = warna + 10;
    p4 = warna + 5;

    batasAngka(p1, p2, p3, p4);

    cout << "Perpaduan Warna Complementary Dengan Warna Nomor: " << p1 << " dan " << p2 << " atau " << p3 << " dan " << p4 << endl;
}

void warnaComplementary(int warna)
{
    int p;
    p = warna + 6;

    batasAngka(p);

    cout << "Perpaduan Warna Complementary Dengan Warna Nomor: " << p << endl;
}

void warnaAnalogous(int warna)
{
    int p1, p2, p3, p4;

    p1 = warna + 1;
    p2 = warna + 2;
    p3 = warna + 10;
    p4 = warna + 11;

    batasAngka(p1, p2, p3, p4);

    cout << "Perpaduan Warna Analogous Dengan Warna Nomor: ";
    cout << p1 << "," << p2 << " atau " << p4 << "," << p1 << " atau " << p3 << "," << p4 << endl;
}

void menuPerpaduanWarna(int warna)
{
    char perpaduan;

    cout << "\nPerpaduan Warna Harmonis";
    cout << "\na. Perpaduan Warna Analogous";
    cout << "\nb. Perpaduan Warna Complementary";
    cout << "\nc. Perpaduan Warna Split Complementary";
    cout << "\nd. Perpaduan Warna Triadic Complementary";
    cout << "\ne. Perpaduan Warna Tetrad Complementary";
    cout << "\nPilihan: ";
    cin >> perpaduan;

    switch (perpaduan)
    {
    case 'a':
        warnaAnalogous(warna);
        break;

    case 'b':
        warnaComplementary(warna);
        break;

    case 'c':
        warnaSplitComplementary(warna);
        break;

    case 'd':
        warnaTriadicComplementary(warna);
        break;

    case 'e':
        warnaTetradComplementary(warna);
        break;

    default:
        break;
    }
}

string sifatWarna(int warna)
{
    string sifat;

    if (warna >= 1 and warna <= 6)
    {
        sifat = "Hangat";
    }
    else if (warna >= 7 and warna <= 12)
    {
        sifat = "Sejuk";
    }
    else
    {
        sifat = "Tidak Valid";
    }

    return sifat;
}

string notasiWarna(int warna)
{
    string notasi;

    if (warna == 3 or warna == 7 or warna == 11)
    {
        notasi = "Primer";
    }
    else if (warna == 1 or warna == 9 or warna == 5)
    {
        notasi = "Sekunder";
    }
    else if (warna == 2 or warna == 4 or warna == 6 or warna == 8 or warna == 10 or warna == 12)
    {
        notasi = "Tersier";
    }
    else
    {
        notasi = "Tidak Valid";
    }

    return notasi;
}

void menu()
{
    int warna;
    bool ulang = true;

    do
    {
        cout << "\nMenentukan Notasi, sifat warna, dan perpaduan warna harmonis";
        cout << "\nWarna-warna: " << endl;
        cout << "1. Orange" << setfill(' ') << setw(22) << right << "2. Red-Orange" << setw(7) << right << "3.Red" << endl;
        cout << "4. Red-Violet" << setfill(' ') << setw(14) << right << "5. Violet" << setw(19) << right << "6.Blue-Violet" << endl;
        cout << "7. Blue" << setfill(' ') << setw(24) << right << "8. Blue-Green" << setw(9) << right << "9.Green" << endl;
        cout << "10. Yellow-Green" << setfill(' ') << setw(12) << right << "11. Yellow" << setw(22) << right << "12. Yellow-Orange" << endl;
        cout << "Pilih warna nomor : ";
        cin >> warna;

        cout << "\nNotasi warna : " << notasiWarna(warna) << endl;
        cout << "Sifat warna : " << sifatWarna(warna) << endl;

        menuPerpaduanWarna(warna);

    } while (ulang);
}

int main()
{
    menu();
}

void batasAngka(int &p1, int &p2, int &p3, int &p4)
{
    if (p1 > 12)
    {
        p1 -= 12;
    }
    if (p2 > 12)
    {
        p2 -= 12;
    }
    if (p3 > 12)
    {
        p3 -= 12;
    }
    if (p4 > 12)
    {
        p4 -= 12;
    }
}

void batasAngka(int &p1, int &p2)
{
    if (p1 > 12)
    {
        p1 -= 12;
    }
    if (p2 > 12)
    {
        p2 -= 12;
    }
}

void batasAngka(int &p)
{
    if (p > 12)
    {
        p -= 12;
    }
}