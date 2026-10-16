#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Her çalýþtýrmada farklý sayý üretmesi için zamaný tohum (seed) olarak veriyoruz
    srand(time(nullptr));

    // 0 ile 99 arasýnda rastgele sayý üretmek için:
    int rsayi = rand() % 100; 
    int tahmin,sayac=0;
    setlocale(LC_ALL,"TURKISH");
    do{
    	cout << "100 ile 1 arasinda bir tahminde bununuz : ";
    	cin >> tahmin;
    	if(tahmin> rsayi) cout << "Tahininiz çok büyük\n";
    	else cout << "Tahmininiz çok küçük\n";
    	sayac++;
	} while (rsayi!=tahmin);
	if (rsayi==tahmin) cout << "Tebrikler " << sayac << " defada Bildiniz\n";
	else cout << "Üzgünüm bilemediniz";

    //cout << "Rastgele Sayi: " << rsayi << endl;
    return 0;
}