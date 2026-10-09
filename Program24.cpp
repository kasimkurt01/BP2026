#include<iostream>
using namespace std;
int main() {
	int h;
	setlocale(LC_ALL,"TURKISH");
	do{
	cout << "Haftanýn Gününü Girniz :" ; cin >>h;
	switch (h){
		case 1: cout << "Pazar\n"; break;
		case 2: cout << "Pazartesi\n"; break;
		case 3: cout << "Salý\n"; break;
		case 4: cout << "Çarþamba\n"; break;
		case 5: cout << "Perþembe\n"; break;
		case 6: cout << "Cuma\n"; break;
		case 7: cout << "cumartesi\n"; break;
	}
    } while (h!=0);
}