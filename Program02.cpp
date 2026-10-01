#include<iostream> // stdio.h
using namespace std;
int main(){
	setlocale(LC_ALL,"TURKISH"); // türkçe karakterleri set eder.
	cout << "Bu benim ilk programım\n"; // bir alt satıra geç
	cout << "Bu programı yeni öğreniyorum\t"; // boşluk bırak
	cout << "Faydalı olacağını umud ediyorum\a"; // Zil sesi
	return 0;
}