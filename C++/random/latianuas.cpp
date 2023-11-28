#include <iostream>
#include <array>

using namespace std;
int harga[5] = {250000, 90000, 3500, 750000, 5250};
string menu[5] = {"Kursi", "Papan Tulis", "Spidol", "Meja", "Penggaris"};
int antrian[100]; // 100 Max Antrian
string customer[100]; // Max customernya
int TotalPesanan[100]; // Max Total Pesanan
string MenuPesanan[100]; // Max Pesanan Customer
int jumlahPesanan = 0;
int jumlah_order, total, order, NoAntri, Pilihan, hitung;
string nama;


void MenuToko(){
    cout << "Menu Toko Lutfi : " << endl;
    //for (int i = 0; i < 5; i++)
    //{
    //    cout << i + 1 << ". " << menu[i] << "     Rp" << harga[i] << endl;
   // }

    cout << "1. Kursi           Rp. 250000" << endl;
    cout << "2. Papan Tulis     Rp. 90000" << endl;
    cout << "3. Spidol          Rp. 3500" << endl;
    cout << "4. Meja            Rp. 750000" << endl;
    cout << "5. Penggaris       Rp. 5250" << endl;
    
}

void tambah(){
    
    cout << "Nomor Antrian [1 - 100] : "; cin >> NoAntri;
    for (int i = 0; i < jumlahPesanan; i++)
    {
        if (antrian[i] == NoAntri)
        {
            cout << "Nomor antrian sudah ada :( Silakan Pilih nomor antrian yang lain ^v^";
            return;
        }
    }
    
    cout << "Nama Customer           : "; 
    cin.ignore(); getline(cin, nama);
    MenuToko();

    cout << "\nJumlah Orderan : "; cin >> order;
    for (int i = 1; i <= order; i++)
    {   
        cout << endl;
        do
        {   
            cout << endl;
            cout << "Nomor Menu Pilihan " << i << " : "; cin >> Pilihan;
            
            
            if (Pilihan > 5)
        {
            cout << "Menu tidak ditemukan :(" << endl;
        }
        } while (Pilihan > 5);
        
        cout << "Menu dipilih   : " << menu[Pilihan - 1] << endl;
    do
    {   
        cout << "Jumlah Order   : "; cin >> jumlah_order;
        
        hitung = jumlah_order*harga[Pilihan - 1];
        cout << "Total          : Rp" << hitung;

        total += hitung;
        antrian[jumlahPesanan] = NoAntri;
        customer[jumlahPesanan] = nama;
        TotalPesanan[jumlahPesanan] = total;
        MenuPesanan[jumlahPesanan] = menu[Pilihan - 1];
        jumlahPesanan++;
        /*for (int i = 0; i <= MenuPesanan->length(); i++)
            {
                cout << endl << MenuPesanan[i] << endl;
            }
        */
    } while (jumlah_order == 0);
    
        

    }
    cout << endl << endl;
    cout << "Total Biaya       : Rp" << total;
    cout << "\nPesanan Berhasil ditambah ^v^" << endl;
    
}

void lihat(){
    if (jumlahPesanan == 0)
    {
        cout << "Belum ada Pesanan :(";
    } else {
        cout << "Pesanan Yang Sudah Masuk : " << endl;
        for (int i = 0; i < jumlahPesanan; i++)
        {
            cout << antrian[i] << ". " << customer[i] << endl;
            cout << "Pesanan : " << endl;
            for (int j = 1; j <= order; j++)
            {
                cout << j << ". " << MenuPesanan[i] << endl;
            }
            
            
            //cout << "Total Pesanan : " << endl;

        }
    }
}

int main(){

    string username, password, nama, ulang;
    int menu, log;

    for (log = 3; log > 0;)
    {
        cout << "\nSilakan Login!" << endl;
        cout << "Username   : "; getline(cin, username);
        cout << "Password   : "; getline(cin, password);
    //if (username == "ruhul" && password == "123230046")
    if (username == password)
    {
        log = -1;
    } else {
        log--;
        //system("cls");
        cout << "Username atau Password salah!" << endl;
        cout << "Kesempatan Anda login : " << log << endl;
        }
    if (log == 0)
    {
        //system("cls");
        cout << "\nKesempatan anda habis!";
        return 0;
    }
    }

    system("cls");
    cout << "Selamat datang " << username << " di toko Lutfi" << endl;
    for (int ulg = 0; ulg <= 0;)
    {
    
    
    cout << "Pilih menu : " << endl;
    cout << "1. Tambah Pesanan" << endl;
    cout << "2. Lihat Pesanan" << endl;
    cout << "3. Keluar" << endl;
    cout << "Menu       : "; cin >> menu;

    switch (menu)
    {
    case 1: // Tambah Pesanan
        tambah();
        cout << "\nKembali ke menu utama? [y/n] : "; cin >> ulang;
        break;

    case 2: // Lihat Pesanan
        lihat();
        
        cout << "\nKembali ke menu utama? [y/n] : "; cin >> ulang;
        break;
    
    case 3: // Keluar
        //system("cls");
        cout << "Anda keluar dari program!";
        return 0;
        break;

    default:
        //system("cls");
        cout << "Pilihan anda tidak ada di menu!" << endl;
        ulg = 0;
        break;
     }

        if (ulang == "y")
        {
            ulg = 0;
        } else {
            system("cls");
            cout << "Anda keluar dari program!";
            return 0;
        }
        
    }

    

    return 0;
}