#include<iostream> // Aritmetik operatörler
using namespace std;

int main(){
	int a,b; float c;
	setlocale(LC_ALL,"TURKISH");
	cout << "a için bir sayı giriniz :"; cin >> a;
	cout << "b için bir sayı giriniz :"; cin >> b;
	c=a+b;
	cout << "\n" << a <<"+" << b << "=" << c <<"\n";
	c=a-b;
	cout << "\n" << a <<"-" << b << "=" << c <<"\n";
	c=a*b;
	cout << "\n" << a <<"*" << b << "=" << c <<"\n";
	c=(float)a/b;
	cout << "\n" << a <<"/" << b << "=" << c <<"\n";
	c=a%b;
	cout << "\n" << a <<"mod" << b << "=" << c <<"\n";
	
	a+=1; b-=2;
	
	c=a+b;
	cout << "\n" << a <<"+" << b << "=" << c <<"\n";
	c=a-b;
	cout << "\n" << a <<"-" << b << "=" << c <<"\n";
	c=a*b;
	cout << "\n" << a <<"*" << b << "=" << c <<"\n";
	c=(float)a/b;
	cout << "\n" << a <<"/" << b << "=" << c <<"\n";
	c=a%b;
	cout << "\n" << a <<"mod" << b << "=" << c <<"\n";
	return 0;
}