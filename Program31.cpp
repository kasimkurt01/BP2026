#include<iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
	int a=500;

	cout << "Adres a :" << &a <<" Adersteki deðer :" << a << "\n";
	cout << "Adres a +1 :" << &a+1 <<" Adersteki deðer :\n" ; 
	cout << "Adres a -1 :" << &a-1 <<" Adersteki deðer :"  << "\n";
	return 0;
}