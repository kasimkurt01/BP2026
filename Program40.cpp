// aşırı yüklü fonsiyonlar
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
const double PI=3.14157; // global değişken
void KarakterYaz();
void KarakterYaz(char );
void KarakterYaz(char , int);

int main(){
	KarakterYaz(); // argumansız
	cout <<endl;
	KarakterYaz('%'); // Bir argumanlı
	cout <<endl;
	KarakterYaz('&',40);// iki argumanlı
	
	cout <<endl;cout <<endl;
	return 0;
}

void KarakterYaz(){
	int i;// yerel değişken 
	for(i=0;i<45; i++) cout << '*';
}

void KarakterYaz(char r){
	for(int i=0;i<35; i++) cout << r;
}

void KarakterYaz(char k, int n){
	for(int i=0;i<n; i++) cout << k;
}