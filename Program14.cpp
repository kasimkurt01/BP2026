#include<iostream>
using namespace std;

int main(){
	int N=100,n;
	double sum=0;
	setlocale(LC_ALL,"TURKISH");
	for(n=1;n<=N;++n){
		sum =sum+ (double)1/n; // sum +=1/n
		
	}
	
	cout << "Seri toplamý = "<< sum << "dir\n";
	
	return 0;
}