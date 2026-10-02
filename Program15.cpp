#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double g =9.80665;
	double h = 100;
	double dt =0.125;
	double t,y;
	setlocale(LC_ALL,"TURKISH");
	
	cout << "Zaman (s)\t" << "Yükeklik (m) \n";
	for(t=0;t<=5; t+=dt){
	  y=h-0.5*g*t*t;
	  
	  cout <<fixed<<setprecision(2) <<t <<"\t\t" << y << "\n";	  
	}
	
}