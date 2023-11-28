#include <iostream>
#include <iomanip>
using namespace std;

/*bool login (string user, string pass)
{
	return (user == "aulia putri" && pass == "47");
}*/

void check(int *p1, int *p2, int *p3, int *p4)
{
	if (*p1 >= 12)
	{
		*p1 % 12;
	}
	if (*p2 >= 12)
	{
		*p2 % 12;
	}
	if (*p3 >= 12)
	{
		*p3 % 12;
	}
	if (*p4 >= 12)
	{
		*p4 % 12;
	}
}

int main()
{
	// string user, pass;
	int warna, p1, p2, p3, p4;
	string notasi, sifat;
	char pilih;

	/*do{
		cout << "Silakan login!";
		cout << "\nUsername : "; getline(cin,user);
		cout << "Password : "; cin >> pass;
		cin.ignore();
		login (user, pass);
	} while (!login(user,pass));*/

	do
	{
		cout << "\nMenentukan Notasi, sifat warna, dan perpaduan warna harmonis";
		cout << "\nWarna-warna: " << endl;
		cout << "1. Orange" << setfill(' ') << setw(22) << right << "2. Red-Orange" << setw(7) << right << "3.Red" << endl;
		cout << "4. Red-Violet" << setfill(' ') << setw(14) << right << "5. Violet" << setw(19) << right << "6.Blue-Violet" << endl;
		cout << "7. Blue" << setfill(' ') << setw(24) << right << "8. Blue-Green" << setw(9) << right << "9.Green" << endl;
		cout << "10. Yellow-Green" << setfill(' ') << setw(12) << right << "11. Yellow" << setw(22) << right << "12. Yellow-Orange";

		cout << "\n\nPilihan warna nomor: ";
		cin >> warna;
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
		if (warna >= 1 and warna <= 6)
		{
			sifat = "Hangat";
		}
		else if (warna >= 7 and warna <= 12)
		{
			sifat = "Sejuk";
		}
		cout << "\nNotasi Warna: " << notasi;
		cout << "\nSifat Warna: " << sifat;

		cout << "\nPerpaduan Warna Harmonis";
		cout << "\na. Perpaduan Warna Analogous";
		cout << "\nb. Perpaduan Warna Complementary";
		cout << "\nc. Perpaduan Warna Split Complementary";
		cout << "\nd. Perpaduan Warna Triadic Complementary";
		cout << "\ne. Perpaduan Warna Tetrad Complementary";
		cout << "\nPilihan: ";
		cin >> pilih;

		if (pilih == 'a')
		{
			p1 = warna + 1;
			p2 = warna + 2;
			p3 = warna + 10;
			p4 = warna + 11;

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
			cout << "\nPerpaduan Warna Analogous Dengan Warna Nomor: ";
			cout << p1 << "," << p2 << " atau " << p1 << "," << p3 << " atau " << p3 << "," << p4;
		}

		else if (pilih == 'b')
		{
			p1 = warna + 6;
			if (p1 > 12)
			{
				p1 -= 12;
			}
			cout << "\nPerpaduan Warna Complementary Dengan Warna Nomor: " << p1;
		}

		else if (pilih == 'c')
		{
			p1 = warna + 2;
			p2 = warna + 7;
			p3 = warna + 10;
			p4 = warna + 5;
			check(&p1, &p2, &p3, &p4);
			cout << "\nPerpaduan Warna Complementary Dengan Warna Nomor: " << p1 << " dan " << p2 << " atau " << p3 << " dan " << p4;
		}

		else if (pilih == 'd')
		{
			p1 = warna + 4;
			p2 = warna + 8;

			if (p1 > 12)
			{
				p1 -= 12;
			}
			if (p2 > 12)
			{
				p2 -= 12;
			}
			cout << "\nPerpaduan Warna Triadic Complementary Dengan Warna Nomor: " << p1 << " dan " << p2;
		}

		else if (pilih == 'e')
		{
			p1 = warna + 3;
			p2 = warna + 6;
			p3 = warna + 9;

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

			cout << "\nPerpaduan Warna Tetrad Complementary Dengan Warna Nomor: " << p1 << ", " << p2 << ", dan " << p3 << endl;
		}
	} while (pilih == 'a' or pilih == 'b' or pilih == 'c' or pilih == 'd' or pilih == 'e');
}
