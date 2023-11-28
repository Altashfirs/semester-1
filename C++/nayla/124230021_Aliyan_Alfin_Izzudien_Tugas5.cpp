#include <iostream>
#include <iomanip>
#include <limits>
#include <ios>
#include <conio.h>
using namespace std;

string username, password, nama[10], NIM[10], kelas[10];
int i, m, n, jmlMhs, nilai[10][3];
float nilaiAkhir[10];
char predikat[10];

void login();
void viewTable();
void tableMenu();
void showIndex();
void inputData();
void viewData();
void menuRekursif();
void menampilkanDeret(int &m, int &n);
int deretRekursifGenap(int m, int n);


int main(){
    
    login();
    cout << "Terima kasih sudah menggunakan program ini, Have A Nice Day!" << endl;
}

void inputData(){
    cout << "Input Jumlah mahasiswa : ";
    cin >> jmlMhs;
    cout << "\n";

    for (i = 0; i < jmlMhs; i++){
        cout << "-- INPUT DATA MAHASISWA "<< i + 1 << " --" << endl << endl;
        cout << "Masukkan nama mahasiswa \t: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin , nama[i]);
        cout << "Masukkan NIM \t\t\t: ";
        getline(cin , NIM[i]);
        cout << "Masukkan kelas \t\t\t: ";
        cin >> kelas[i];
        cout << "Masukkan Nilai UTS \t\t: ";
        cin >> nilai[i][0];
        cout << "Masukkan Nilai UAS \t\t: ";
        cin >> nilai[i][1];
        cout << "Masukkan Nilai Harian \t\t: ";
        cin >> nilai[i][2];
        cout << "\n";
        cout << "Data mahasiswa " << i+1 << " tersimpan! " << endl << endl;
        nilaiAkhir[i] = nilai[i][0] * 0.3 + nilai[i][1] * 0.3 + nilai[i][2] *0.4;

        showIndex();
        getch();
    }
}

void viewData(){
    cout << "TABEL DATA NILAI MAHASISWA" << endl << endl;
    cout << "#=========================================================================================================#\n";
    cout << "| " << setw(20) << left <<"Nama Mahasiswa" << "\t\t|" << setw(9) << " NIM" <<  "\t| "<<setw(4) <<"Kelas" << " | " << setw(4) << "UTS" <<"  | " << setw(4) << "UAS" <<"  | " << setw(7) << "Harian" << "  | " << setw(6) << "Nilai Akhir" << " | " << "Indeks"<< " |\n";
    cout << "|===============================|===============|=======|=======|=======|==========|=============|========|\n";

    for (i = 0; i < jmlMhs; i++){

        cout << "| "<< i+1 <<". " << setw(25) << left << nama[i] << "\t| " << setw(12) << NIM[i] << "\t| " << setw(3) << kelas[i] << "\t| " << setw(4) <<  nilai[i][0] << "\t| " << setw(4) << nilai[i][1] << "\t| " << setw(9) << nilai[i][2] << setw(8) << "| " << setw(6) << left  << nilaiAkhir[i] << "| " << setw(6) << predikat[i] << " |\n";
            
    }

    cout << "#---------------------------------------------------------------------------------------------------------#\n";
    system("Pause");
    system("cls");
}


void showIndex(){

    if(nilaiAkhir[i] >= 85 && nilaiAkhir[i] <= 100){
	 predikat[i] = 'A';
    } else if (nilaiAkhir[i] >= 75 && nilaiAkhir[i] < 85){
     predikat[i] = 'B';
    } else if (nilaiAkhir[i] >= 65 && nilaiAkhir[i] < 75){
     predikat[i] = 'C';
    } else if (nilaiAkhir[i] >= 50 && nilaiAkhir[i] < 65){
     predikat[i] = 'D';
    } else if (nilaiAkhir[i] >= 0 && nilaiAkhir[i] < 50){
     predikat[i] = 'E';
    } else {
     predikat[i] = '?';
    }

}


void viewTable(){
    
    cout << "#" << "========================================"<< "#" << endl;
    cout << "|" << "\t\t MENU " << "\t\t\t |" << endl;
    cout << "|" << "========================================"<< "|" << endl;
    cout << "| " << "1. Input Data Mahasiswa" << "\t\t |" << endl;
    cout << "| " << "2. Lihat Data Mahasiswa" << "\t\t |" << endl;
    cout << "| " << "3. Rekursif Ganjil/Genap" << "\t\t |" << endl;
    cout << "| " << "4. Selesai " << "\t\t\t\t |" << endl;
    cout << "#" << "========================================"<< "#" << endl;

}

void tableMenu(){
    
    int pilihan;
    enum pilihan {INPUT = 1, VIEW, RECCURENCE};
    
    do {
        system("cls");
        viewTable();
        cout << "Pilih [1-4] : ";
        cin >> pilihan;
        system("Pause");
        system("cls");

        switch(pilihan){
            case INPUT : 
            inputData();
            break;

            case VIEW : 
            viewData();
            break;

            case RECCURENCE : 
            menuRekursif();
            break;
        }

    }while(pilihan != 4);
}

void login(){
    system("cls");
    cout << "#======================#" << endl;
    cout <<"| " << "LOGIN AKUN MAHASISWA" << " |" << endl;
    cout << "#======================#" << endl << endl;
    cout << "Username : ";
    getline(cin, username);
    cout << "Password : ";
    getline(cin, password);

    if(username == "SatuDuaTiga" &&  password == "abcdefg"){
        cout << "\nLOGIN BERHASIL" << endl;
        system("pause");
        system("cls");
        tableMenu();
        
    } else {
        cout << "Username atau Password salah, silahkan coba ulang!" << endl;
        getch();
        login();
    }

}

int deretRekursifGenap(int m, int n){
    if (m > n) {
        return 0; 
    } else if (m == 1){
        m = 2;
        menampilkanDeret(m,n);
        return m + deretRekursifGenap((m + 2), n);
    } else if (m % 2 == 0){
        menampilkanDeret(m,n);
        return m + deretRekursifGenap((m + 2), n);
    } else if (m % 2 != 0){
        m = m+1;
        menampilkanDeret(m,n);
        return m + deretRekursifGenap((m + 2), n);
    }
    return 0;
}


int deretRekursifGanjil(int m, int n){
    if (m > n) {
        return 0; 
    } else if(m % 2 == 1){
        menampilkanDeret(m,n);
        return m + deretRekursifGanjil(m+2, n);
    } else if (m % 2 != 1){
        m = m +1 ;
        menampilkanDeret(m,n);
        return m + deretRekursifGanjil(m+2, n);
    }
    return 0;
}

void menuRekursif(){
    char pilih;
    cout << "Input bilangan awal : ";
    cin >> m;
    cout << "Bilangan akhir : ";
    cin >> n;

    cout << "[+] Deret Genap" << endl;
    cout << "[-] Deret Ganjil" << endl;
    cout << "Pilih [+/-] : ";
    cin >> pilih;
    if(pilih == '+'){
        cout << "Deret Genap : " << endl;
        cout << deretRekursifGenap(m,n) << endl;
    } else if (pilih == '-'){
        cout << "Deret Ganjil : " << endl;
        cout << deretRekursifGanjil(m,n) << endl;
    }
    system("pause");
    
}

void menampilkanDeret(int &m, int &n){
    if (m <= n) {
        cout << m;
        if (m + 2 <= n) {
            cout << " + ";
        } else {
            cout << " = ";
        }
    }
}