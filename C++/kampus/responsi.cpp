#include <iostream>

using namespace std;

int jumlahPesanan = 0;
int antrian[100];
int nama[100];
int harga[100];
int jumlahOrder[100];
string pesanan[100][100];
string produk[5] = {"Kursi", "Papan Tulis", "Spidol", "Meja", "Penggaris"};
int hargaProduk[5] = {250000, 90000, 3500, 750000, 5250};

void tambah();
int cekAntrian(int x);

void menu()
{
    int pilihMenu;
    do
    {
        cout << "Pilih menu : " << endl;
        cout << "1. Tambah Pesanan" << endl;
        cout << "2. Lihat Pesanan" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan anda : ";
        cin >> pilihMenu;

        switch (pilihMenu)
        {
        case 1:
            tambah();
            break;
        case 2:
            break;

        default:
            break;
        }
    } while (pilihMenu != 3);
}

void tambah()
{
    int antrian, cekNomor, Pilihan, jumlahOrderan;

    do
    {
        cout << "Nomor Antrian (1-100) : ";
        cin >> antrian;
        cekNomor = cekAntrian(antrian);
        if (cekNomor == -1)
        {
            cout << "tidak kosong" << endl;
        }
        else if (cekNomor == -2)
        {
            jumlahPesanan++;
        }

    } while (cekNomor == -1);

    cout << "\nNama Customer : ";
    cin >> nama[jumlahPesanan - 1];

    cout << "Menu Toko Lutfi : " << endl;

    cout << "1. Kursi           Rp. 250000" << endl;
    cout << "2. Papan Tulis     Rp. 90000" << endl;
    cout << "3. Spidol          Rp. 3500" << endl;
    cout << "4. Meja            Rp. 750000" << endl;
    cout << "5. Penggaris       Rp. 5250" << endl
         << endl;

    cout << "Jumlah Orderan : ";
    cin >> jumlahOrderan;

    for (int i = 0; i < jumlahOrderan; i++)
    {
        cout << endl;
        do
        {
            cout << endl;
            cout << "Nomor Menu Pilihan " << i << " : ";
            cin >> Pilihan;

            if (Pilihan > 5)
            {
                cout << "Menu tidak ditemukan :(" << endl;
            }
        } while (Pilihan > 5);
        cout << "\tMenu dipilih : " << produk[Pilihan] << endl;
        pesanan[jumlahPesanan-1][i] = Pilihan;
        cout << "\tJumlah Order : ";
        
    }
}

int main()
{
    menu();
}

int cekAntrian(int x)
{
    bool Kosong = true;
    for (int i = 0; i <= jumlahPesanan; i++)
    {
        if (antrian[i] == x)
        {
            return -1;
            Kosong = false;
        }
    }

    if (Kosong)
    {
        for (int j = 0; j <= jumlahPesanan; j++)
        {
            if (j == jumlahPesanan)
            {
                antrian[j] = x;
                return -2;
            }
        }
    }
}