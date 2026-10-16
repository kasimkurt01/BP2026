// Sýralama
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	const int N=8;
	double X[N]={3.06, 3.04, 3.02, 3.05, 3.13, 3.08, 3.04, 3.06};
	int i,j;
	double temp;
	setlocale(LC_ALL,"TURKISH");
    cout << "\nDizinin Doðla Hali \n";
	for(i=0;i<N;++i) 
	cout << "Dizinin\t:" << i+1 << "\telemaný\t" << X[i] <<"\n";
// sýralama modülü
	for(i=0;i<N;++i) 
	   for(j=i;j<N;++j) 
	   if(X[i] > X[j]) {
	   	temp=X[i];
	   	X[i]=X[j];
	   	X[j]=temp;
	   }
//****************
	cout << "\nDizinin Sýralý Hali \n";   
	for(i=0;i<N;++i) 
	cout << "Dizinin\t:" << i+1 << "\telemaný\t" << X[i] <<"\n";
	
return 0;
}