#include<cmath>
#include<iomanip>
#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	double T;
	
	do{
		cout << "Sýcaklýðý Giriniz :";
		cin >> T;
		if(T<=0) cout << "\nSýcaklýk sýfýrdan küçük olmaz\n";
		else 
		 cout <<"\nGeçerli sýcaklýk :" << T << endl;
	} while(T<=0.0);
	
}
	
	