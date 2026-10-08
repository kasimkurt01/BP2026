#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	int n=1;
	double term=1;
	double x=1.5;
	double s=0;
	double eps =1e-8;
	
	while(abs(term)>eps){
		s+=term; // s+=term
		n++;
		term =term* (x/n);
	
	}
	
	 cout <<fixed<<setprecision(2) << " n :" << n <<" e^" << x <<"in açılımı " << s<< "\tGeçek Değer : " << exp(x)<<"\t\t" <<"\n";
	
}