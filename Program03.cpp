#include<iostream> // bir sayýnýn tek veya çift olduðunu bulan program
using namespace std;

int main(){
	setlocale(LC_ALL,"TURKISH");
	int a;
	cout << "Klavyeden bir sayý giriniz :";
	cin >> a;
	
	if(a%2==0) 
	  cout << a << " Sayýsý Çifttir\n";
	else 
	  cout << a << " Sayýsý Tektir\n";
	
	return 0;
}