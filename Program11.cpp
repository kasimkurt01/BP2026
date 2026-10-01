#include<iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "TURKISH");
	int ay;
	cout << "Yýlýn ayýný sayýsal olaral giriniz (1..12)";
	cin >> ay;
	
	switch (ay){
		
		case 1: case 2: case 12:
			cout << "Mevsim KIÞ"; break;
		case 3: case 4: case 5:
			cout << "Mevsim Ýlkbahar"; break;
		case 6: case 7: case 8:
			cout << "Mevsim Yaz"; break;
		case 9: case 10: case 11:
			cout << "Mevsim Kýþ"; break;
		default : cout << "Belirsiz Mevsim";
	}
	return 0;
}