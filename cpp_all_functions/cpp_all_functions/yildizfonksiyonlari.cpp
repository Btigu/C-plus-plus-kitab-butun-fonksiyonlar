#include "yildizfonksiyonlari.h"
using namespace std;

void yildiz1() {

    int kenar;
    cout << "Kenar giriniz: ";
    cin >> kenar;

    for (int i = 0; i < kenar; ++i)
    {
        for (int k = 0; k < i; ++k) {
            cout << " ";
        }
        for (int j = kenar; j > i; --j) {
            cout << "*";
        }
        cout << endl;
    }
}

void yildiz2()
{
    int kenar;
    cout << "En giriniz: ";
    cin >> kenar;

    for (int i = kenar; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}


void yildiz3()
{
    int kenar;
    cout << "Kenar uzunlugu girinz: ";
    cin >> kenar;

    for (int i = 0; i < kenar; i++) {
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }

        cout << endl;
    }


}

void yildiz4()
{
    int kenar;
    cout << "Kenar giriniz: ";
    cin >> kenar;

    for (int i = 0; i < kenar; i++) {
        for (int k = kenar - 1; k > i; --k)
        {
            cout << " ";

        }
        for (int j = 0; j <= i; ++j)
        {
            cout << "*";

        }
        cout << endl;

    }


}
