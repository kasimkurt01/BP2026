#include<cmath>
#include<iomanip>
#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	double k=10.0, m=1.0, x=1.0, b=0.01;
	double Et, v=0, F,a,dt=0.01, s=0;
	cout <<"Time \t" << "Energy\n";
	do{
		F=-k*x-b*v;
		a=F/m;
				
		Et=0.5*m*v*v+0.5*k*x*x;
		v=v+a*dt;
		x=x+v*dt;
		s++;
	//	cout << s*dt << "\t" << Et <<"\t"<< x <<"\t"<<v<<endl;
	} while(Et >=0.0 && s<=1e8);
	
	cout << "S istemin minimum E :" << Et <<"\nVe toplam süre :"<< s*dt << " dir\n";
	return 0;
}