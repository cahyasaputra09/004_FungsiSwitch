#include <iostream>
using namespace std;

int bilA, bilB;

void input()
{
	cout << "Masukan Bilangan Pertama = ";
	cin >> bilA;
	cout << "Masukan bilangan kedua = ";
	cin >> bilB;
}

int penjumlahan(int a, int b)
{
	return a + b;

}

int pengurangan(int a, int b)
{
	return a - b;
}

int perkalian(int a, int b)
{
	return a * b;
}

float pembagian(int a, int b)
{
	return a / b;
}

int main()
{
	int pilihan;
	do
	{
		cout << "Kalkulator Sederhana" << endl;
		cout << "====================" << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian  " << endl;
		cout << "4. Pembagian  " << endl;
		cout << "5. Keluar     " << endl;
		cout << "==============" << endl;
		cout << "Masukan Menu Pilihan : ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			input();
			cout << "Hasil Penjumlahan = " << penjumlahan(bilA, bilB) << endl;
			break;
		case 2:
			input();
			cout << "Hasil Pengurangan = " << pengurangan(bilA, bilB) << endl;
			break;
		case 3:
			input();
			cout << "Hasil Perkalian = " << perkalian(bilA, bilB) << endl;
			break;
		case 4:
			input();
			cout << "Hasil Pembagian = " << pembagian(bilA, bilB) << endl;
			break;

		case 5:

			break;

		default:
			cout << "Pilihan anda salah" << endl;
			break;
		}
		system("pause");
		system("CLS");

	} while (pilihan |= 5);
}