#include<iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "TURKISH");
	int gun;
	cout << "Haftanýn Gün sayýsýný giriniz (0..6)";
	cin >> gun;
	gun =gun%7;
	switch (gun){
		
		case 0: cout << "Pazar\n";break;
		case 1: cout << "Pazartesi\n";break;
		case 2: cout << "Salý\n";break;
		case 3: cout << "Çarþamba\n";break;
		case 4: cout << "Perþembe\n";break;
		case 5: cout << "Cuma\n";break;
		case 6: cout << "Cumartesi\n";break;
		
		default : cout << "Belirsiz gün\n";break;
	}
	
	return 0;
}