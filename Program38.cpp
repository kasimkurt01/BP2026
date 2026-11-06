#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct Kure{
	float r;
	float A;
	float H;
	string r1;
};
const float PI =3.14157;
float Alan (float a){
	return 4*PI*pow(a,2);
}
float Hacim(float a){
	return 4/3*PI*pow(a,3);
}

int main(){
	Kure k1,k2;
	setlocale(LC_ALL,"TURKISH");
	cout << "Birinci yari çap giriniz";
	cin >> k1.r;
	cout << "Ýkinci yari çap giriniz";
	cin >> k2.r;
	k1.r1="Kýrmýzý";
	k2.r1="Mavi";
	k1.A=Alan(k1.r);
	k2.A=Alan(k2.r);
	k1.H=Hacim(k1.r);
	k2.H=Hacim(k2.r);
	cout << "\nBirinci Kure "  << k1.r1 << "\n";
	cout << "Yarý Çap \t:" << k1.r << "\nAlan \t:" << k1.A<<"\nHacim \t:" << k1.H <<"\n"; 
	cout << "\nÝkinci Kure " << k2.r1 << "\n";;
	cout << "Yarý Çap \t:" << k2.r << "\nAlan \t:" << k2.A<<"\nHacim \t:" << k2.H <<"\n"; 
}