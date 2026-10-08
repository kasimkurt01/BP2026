#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	double g=9.81;
	double v=40;
	double y=0;
	double t=0;
	double dt =0.00001;
	t=t+dt;
	y=v*dt;
	while(y>0){
		v=v-g*dt; // v-=g*dt;
		y= y+v*dt;
		t=t+dt;
	}
	
	
	cout << "Yere düþene kadar geçen süre :" << t <<"dir.\n";
	cout << "Gerçek zaman :" << 2*40/g << " saniye \n";
}