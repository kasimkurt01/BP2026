// Ýki boyutlu diziler "Matrisler" Çarpým
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

const int n=3;
const int m=3;
int main(){

double M1[n][m]={1,2,3, 3,1,2, 2,1,1};
double M2[n][m]={1,0,0, -3,0,2, 2,-1,0};
double M3[n][m];
int i,j,k; 
for(i=0;i<n;i++){
	for(j=0;j<m;j++) 
	cout << M1[i][j] << " " ;
	cout << endl;
}
cout <<" x\n";

for(i=0;i<n;i++){
	for(j=0;j<m;j++) 
	cout << M2[i][j] << " " ;
	cout << endl;
}
// matrislerde Çarpma
for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	    for(k=0;k<m;k++)
	M3[i][j]+=M1[i][k] * M2[k][j];
//********************
cout <<" =\n";

for(i=0;i<n;i++){
	for(j=0;j<m;j++) 
	cout << M3[i][j] << " " ;
	cout << endl;
}
return 0;
}


