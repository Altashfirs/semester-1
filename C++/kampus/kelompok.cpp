#include <iostream>
#include <iomanip>

using namespace std;

void matriksPertambahan()
{
    int matA[10][10], matB[10][10], hasil[10][10], maxKolom, maxBaris;

    cout << "Masukkan jumlah kolom Matriks A dan B : ";
    cin >> maxKolom;
    cout << "Masukkan jumlah baris Matriks A dan B : ";
    cin >> maxBaris;

    cout << "\nMatriks A" << endl;
    for (int i = 0; i < maxKolom; i++)
    {
        for (int j = 0; j < maxBaris; j++)
        {
            cout << "[" << i << "][" << j << "] : ";
            cin >> matA[i][j];
        }
    }

    cout << "\nMatriks B" << endl;
    for (int i = 0; i < maxKolom; i++)
    {
        for (int j = 0; j < maxBaris; j++)
        {
            cout << "[" << i << "][" << j << "] : ";
            cin >> matB[i][j];
        }
    }

    for (int i = 0; i < maxKolom; i++)
    {
        for (int j = 0; j < maxBaris; j++)
        {
            hasil[i][j] = matA[i][j] + matB[i][j];
        }
    }

    cout << "\nHasil : " << endl;
    for (int i = 0; i < maxKolom; i++)
    {
        for (int j = 0; j < maxBaris; j++)
        {
            cout << "|" << setw(3) << hasil[i][j] << "" << setw(3);
        }
        cout << " | " << endl;
    }
}

int main()
{
    matriksPertambahan();
}