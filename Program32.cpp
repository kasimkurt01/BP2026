#include<iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH");
	int a=500;
	int* b;
	b=&a;
	cout << "Adres a :" << &a <<" Deðer b :" << b << "\n";
	cout << "Adres a +1 :" << b+1 <<" Adersteki deðer :"<< *(b+1) <<"\n" ; 
	cout << "Adres a -1 :" << b-1 <<" Adersteki deðer :" << *(b-1) << "\n";
	return 0;
}