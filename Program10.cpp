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
	
	switch (op){
		case '+': cout << sayi1 <<"+" << sayi2 <<"=" << sayi1+sayi2 << endl;break;
		case '-': cout << sayi1 <<"-" << sayi2 <<"=" << sayi1-sayi2 << endl;break;
		case '*': cout << sayi1 <<"*" << sayi2 <<"=" << sayi1*sayi2 << endl;break;
		case '/': cout << sayi1 <<"/" << sayi2 <<"=" << sayi1/sayi2 << endl;break;
		default : cout << "geçersiz iþlem\n";
	}
	
return 0;
}
