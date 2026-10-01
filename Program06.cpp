#include<iostream>
#include<cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "TURKISH");
	float a,b,c,d,x1,x2;
	cout << " ikinci deceden deklemin parametrelerini\n araya boþlu býrakarak giriniz :";
	cin >> a>>b>>c;
	d=b*b-4*a*c;
	
	if(d<0) cout << "Kokler Sanal";
	else 
	if(d==0) {
		x1=-b/(2*a);
		x2=x1;
		cout << "Kokler çakýþýk x1=x2:" << x1;
	}
	else {
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		cout << "Ýki kök var\n" <<"X1 = " << x1 <<"\nX2 = " << x2<<"\n";
	//	cout << " delta = " << d<<"\n" ;
	}	
	
	
}