#include<iostream>
using namespace std;

int main(){
	float sayi1,sayi2;
	setlocale(LC_ALL, "TURKISH");
	char op;
	cout << "Birinci sayýyý giriniz :" ;
	cin >> sayi1;
	cout << "ikinci sayýyý giriniz :" ;
	cin >> sayi2;
	cout << "Ýþem operatörü(+,-,*,/) :"; ;
	cin >> op;
	
	if(op=='+'){
		cout << "Sonuç :"<< sayi1<< "+" << sayi2 << "="<< sayi1+sayi2 << "\n";
	}
	else if(op=='-'){
		cout << "Sonuç :"<< sayi1<< "-" << sayi2 << "="<< sayi1-sayi2 << "\n";
	}
	else if(op=='*'){
		cout << "Sonuç :"<< sayi1<< "*" << sayi2 << "="<< sayi1*sayi2 << "\n";
	}
	else if(op=='/'){
		if(sayi2 !=0 )
		cout << "Sonuç :"<< sayi1<< "/" << sayi2 << "="<< sayi1/sayi2 << "\n";
		else 
		cout << "Hata ! payda sýfýr olamaz\n";
	}
	else cout << "Geçersiz iþlem operatörü\n";
	
	return 0;
}