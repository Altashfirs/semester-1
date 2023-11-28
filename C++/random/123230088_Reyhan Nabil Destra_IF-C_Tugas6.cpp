#include <iostream>
using namespace std;

int main() {
	
	char ulang;
	string kalimat;
	
	do{
	cout<<"Masukkan paragraf : \n";
	
	while (true) {
        string baris;
        getline(cin, baris);

        if (baris == "--end--") {
            break;
        }

        kalimat += baris + "\n";
    }
	 	
	int hitHB[26]={0};
	int hitHK[26]={0};
	int hitA[10]={0};
	
	for (char karakter : kalimat) {
		if (karakter >= 'A' && karakter <= 'Z') {
			int index = karakter - 'A';
			hitHB[index]++;
			}
		else if (karakter >= 'a' && karakter <= 'z') {
			int index = karakter - 'a';
			hitHK[index]++;
			}
		else if (karakter >= '0' && karakter <= '9') {
			int index = karakter - '0';
			hitA[index]++;
			}
		}
		
	 for (int i = 0; i < 26; i++) {
		 char hb = 'A' + i;
		 char hk = 'a' + i;
		 if (hitHB[i]>0) {
			 cout<<" '"<<hb<<"': "<<hitHB[i]<<endl;
			 }
		 if (hitHK[i]>0) {
			 cout<<" '"<<hk<<"': "<<hitHK[i]<<endl;
			 }
		 }
	 for (int i = 0; i < 10; i++) {
		 char a = '0' + i;
		 if (hitA[i]>0) {
			 cout<<" '"<<a<<"': "<<hitA[i]<<endl;
			 }
		 }
		cout<<"\nIngin mengulangi lagi ? (y/n) : ";cin>>ulang;
		if(ulang == 'y'){
			continue;
		} else if(ulang == 'n'){
			break;
		}
		}
		while(true);
	
	return 0;
	}
