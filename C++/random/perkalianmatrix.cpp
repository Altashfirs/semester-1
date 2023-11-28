#include <iostream>

using namespace std;

void perkalianMatriks(){
    int kAbB, barisA, kolomB;
    int a[10][10], b[10][10], c[10][10];

    cout << "Masukkan\n";
    cout << "Jumlah kolom A dan baris B : ";
    cin >> kAbB;
    cout << "Jumlah Baris A : ";
    cin >> barisA;
    cout << "Jumlah Kolom B : ";
    cin >> kolomB;

    cout << "\nMatrix\n";

    // matrix a
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kAbB; j++)
        {
            cout << "[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    cout << "\n\n";

    // matrix b
    for (int i = 0; i < kAbB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << "[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }

    // perkalian
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < kAbB; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // hasil
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    perkalianMatriks();
}