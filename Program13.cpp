#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "TURKISH");
	long int i,f,n;
	cout << "Fakatöriyeli alýnacak olan sayýyý giriniz :";
	cin >> n;
	f=1;
	for(i=1;i<=n;i++) f*=i; // f=f*i;
	
	cout << n << " != " << f << " dir\n";
	return 0;
}