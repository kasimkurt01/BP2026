#include<iostream>
using namespace std;

int main(){
	int a,b;
	int temp;
	setlocale(LC_ALL,"TURKISH");
	cout << "Birinci sayýyý giriniz :";
	cin >> a;
	cout << "Ýkinci sayýyý giriniz :";
	cin >> b;
	
	if(a>b) 
	   cout << a <<" sayýsý " << b << " den büyüktür\n";
	else 
	   cout << a <<" sayýsý " << b << " den küçüktür\n";
	   
	
	temp=a;
	a=b;
	b=temp;
	
	if(a>b) 
	   cout << a <<" sayýsý " << b << " den büyüktür\n";
	else 
	   cout << a <<" sayýsý " << b << " den küçüktür\n";
	
	
	
	return 0;
}