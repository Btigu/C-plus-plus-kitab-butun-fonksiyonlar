#include "sayisalfonksiyonlar.h"
using namespace std;
float daire_alan(int r)
{
	return 3.14 * r * r;
}

int dikdortgen_alan(int en, int boy) {

	return en * boy;
}

float kare_alan(int kenar) {

	return dikdortgen_alan(kenar, kenar);
}


void alan_yazdir(float alan) {
	cout << "þeklin alani: " << alan << endl;
}
void alanhesaplama()
{
	char secim;
	cout << "Hangi þeklin alanýný hesaplamak istiyorsunuz" << endl;
	cout << "(Daire: d, Dikdortgen: i, kare: k): ";
	cin >> secim;

	float alan;
	switch (secim)
	{
	case 'd':
		int yaricap;
		cout << "Yaricap giriniz: ";
		cin >> yaricap;
		alan = daire_alan(yaricap);
		alan_yazdir(alan);
		break;
	case 'i':
		int en, boy;
		cout << "En ve boy giriniz: ",
			cin >> en >> boy;
		alan = dikdortgen_alan(en, boy);
		alan_yazdir(alan);
		break;
	case 'k':
		int kenar;
		cout << "Kenar uzunlugu giriniz: ";
		cin >> kenar;
		alan = kare_alan(kenar);
		alan_yazdir(alan);
		break;
	default:
		cout << "Desteklenmeyen þekil" << endl;
		break;
	}
}
int fibanocci(int n);   // Doðru bildirim (tek sefer)

void fibanocci_menu()
{
	int n;
	cout << "Fibonacci icin sayi giriniz: ";
	cin >> n;
	cout << "Sayinin fibonaccisi : " << fibanocci(n);
}

int fibanocci(int n)
{
	if (n < 0) return -1;
	if (n == 0) return 0;
	if (n == 1) return 1;

	return fibanocci(n - 1) + fibanocci(n - 2);
}

int a_serisi(int n)
{
	if (n < 0) return -1;
	if (n == 0) return 2;
	if (n == 1) return 3;

	return a_serisi(n - 1) * a_serisi(n - 2);


}
void a_serisii()
{
	int n;
	cout << "a serisi için sayý giriniz : ";
	cin >> n;
	cout << "Sayýnýn a serisi deðeri: " << a_serisi(n);

}
void enbuyuksayi()
{

	cout << "kaç tane sayi gireceksiniz";
	int sayi;
	int enbuyuk;
	int sayiadet;
	cin >> sayiadet;
	for (int i = 1; i <= sayiadet; i++) {
		cout << i << " .Sayiyi giriniz: " << endl;
		cin >> sayi;
		if (i == 1) {
			enbuyuk = sayi;
		}
		else
		{
			if (sayi > enbuyuk)
			{
				enbuyuk = sayi;
			}
		}

	}

	cout << "En buyuk sayi:" << enbuyuk;

}