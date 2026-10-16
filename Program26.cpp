#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	const int N=8;
	double X[N]={3.01, 3.04, 3.02, 3.05, 3.03, 3.08, 3.04, 3.06};
	
	double toplam=0,ortalama,ssapma,XO;
	double st=0,ser;
	int i;
	// ortalama
	for(i=0;i<N;i++) {
	toplam+=X[i];
	cout << i+1 <<" ninci eleman :" << fixed<<setprecision(4) << X[i]	<< endl;
	}
	cout << "Toplam  :\t"<<fixed<<setprecision(4) <<  toplam << endl;
	ortalama=toplam/N;
	XO=ortalama;
	cout << "Ortama : \t" <<fixed<<setprecision(4) <<  ortalama <<endl;
	// standart sapma
	
	for(i=0;i<N;i++)
		st+=pow((X[i]-XO),2); // exp(2*log(x));
		st=st/(N-1);
		st=sqrt(st);
		
	cout <<fixed<<setprecision(4) << "Standar Sapma\t:" << st << " dir\n";
	ser=st/sqrt(N);
	cout << fixed<<setprecision(4) << "Std Sp hata\t:" << ser << " dir\n";
	
	return 0;
}