// en küçük ve en büyük elemaný bulma
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	const int N=8;
	double X[N]={3.06, 3.04, 3.02, 3.05, 3.13, 3.08, 3.04, 3.06};
	double max=X[0];
	double min=X[0];
	int i;
	setlocale(LC_ALL,"TURKISH");
	for(i=0;i<N;++i)
	  if(max<X[i]) max=X[i] ;
	
	for(i=0;i<N;++i)
	  if(min>X[i]) min=X[i] ;
	  
	cout << "Dizinin Enbüyük Elemaný \t:"<< max << " dir.\n";
	cout << "Dizinin Enküçük Elemaný \t:"<< min << " dir.\n\n";
	
	for(i=0;i<N;++i)   
		cout << "Dizinin \t:" << i+1 <<" ninci elemaný \t:" << X[i]<< endl;
		
	return 0;
}