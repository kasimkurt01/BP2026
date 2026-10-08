#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	double N0=1e6;
    double N=N0, l=0.05,dN; // 1 saat;
    double t=0, dt =0.001;
    int i=0;
    while(N>N0/2){
    	dN= -l*N*dt;
    	N=N+dN;// N+=dN
    	t=t+dt; // t+=dt
    	i++;
    	
	}
	cout << "T_1/2 =" << t << " saat sonra yarýya iner \nTeorik Deðer :" << 0.693147/l << "\n";
	cout << "dögü sayýsý sayýsý " << i <<" dir\n";
}