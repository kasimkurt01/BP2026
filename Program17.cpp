#include<iostream>
#include<iomanip>
#include <cmath> // math.h
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	double x=1.5;
	double term=1;
	double toplam=0;
	int n=0;
	const double eps=1e-5;
	while(abs(term)>eps){
		toplam += term;
		n++;
		term= term*(x/n);
	}
	cout << "Hesap :" << toplam << "\nüstel :" << exp(x)<< "\nAdým sayýsý  :"<< n << "\n";
}