#include <iostream>

using namespace std;


// Function untuk mengurangi stok
void kurangiStok(int &stok)
{
    int barangKeluar;

    cout << "Masukkan jumlah barang keluar : ";
    cin >> barangKeluar;

    // Cek apakah barang yang keluar kurang dari stok barang yang ada
    if (stok < barangKeluar)
    {
        cout << "Gagal! Barang yang keluar kurang dari stok barang\n\n";
    }
    else
    {
        stok -= barangKeluar;
        cout << "Stok barang berhasil dikurangi\n\n";
    }
}

// Function menambah barang yang masuk
void tambahStok(int *stok)
{
    int barangMasuk;

    cout << "Masukkan jumlah barang baru: ";
    cin >> barangMasuk;

    // Cek apakah yang di input adalah bilangan negatif
    if (barangMasuk < 0)
    {
        cout << "Gagal! Barang yang masuk tidak bisa kurang dari 0\n\n";
    }
    else
    {
        *stok += barangMasuk;
        cout << "Stok barang berhasil ditambah\n\n";
    }
}

void menu()
{
    int cMenu, stok = 0;
    char pilih;
    bool ulang = true;
    system("cls");

    do
    {
        cout << "Selamat Datang, Silahkan Pilih Menu:" << endl;
        cout << "Pilihan Menu :\n[1] Lihat Stok Barang\n[2] Tambah Stok Barang\n[3] Kurangi Stok Barang\n[Lainnya] Keluar\nPilih operasi (1-3): ";
        cin >> cMenu;

        switch (cMenu)
        {
        case 1:
            cout << "Stok barang saat ini: " << stok << endl
                 << endl;
            break;

        case 2:
            tambahStok(&stok);
            break;

        case 3:
            kurangiStok(stok);
            break;

        default:
            cout << "Terimakasih!\n\n";
            ulang = false;
            break;
        }

    } while (ulang);
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
