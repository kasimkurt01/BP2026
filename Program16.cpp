#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	double a=0,b=2;
	double N=100000;
	double S=0,x;
	double dx=(b-a)/N;
	int i;
	
	for(i=0;i<=N; i++){
		x=a+i*dx;
		S+=(3*x*x+2*x)*dx;
	}
	cout <<fixed<<setprecision(4) <<"Ýntegral = " << S << endl;
}