#include<iostream>
using namespace std;

int main(){
	float a,b,c;
	setlocale(LC_ALL, "TURKIS");
	cout <<"üçgenin kenarlarýný (a b c) olarak giriniz :";
	cin >> a >> b >> c;
	if(a<=0 || b <=0 || c<=0)
	  cout <<"Hatalý giriþ, kenarlardan bir neagit veya sýfýrdýr\n";
	else if((a+b>c)&&(a+c>b)&&(c+b>a)) {
		 if((a==b) && (b==c))
		 cout << "Sonuç : Eþkenar Üçgen\n";
		 else if ((a==b)|| (a==c)|| (b==c)) 
		 cout << "Sonuç : ikiz kenar Üçgen\n";
		 else 
		 cout << "Sonuç : Çeþit kenar Üçgen\n";
	}
	else  cout << "Sonuç : kenar Üçgen eþitsizliðini saðlamaz\n";
	return 0;
}