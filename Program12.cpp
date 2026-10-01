#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "TURKISH");
	int i,t,n;
	t=0;
	cout << "0 dan baþlayýp  toplama yapýlacak olan son sayýyý giriniz : "; 
	cin >> n;
	for(i=0;i<=n;i++){
		t=t+i;
	}
	cout << "0 dan " << n << " e kadar olan sayýlarýn toplamý " << t <<" dir\n";
	
	t=0;
	
	for(i=1;i<=n;i+=2){
		t=t+i;
	}
	cout << "0 dan " << n << " e kadar olan tek sayýlarýn toplamý " << t <<" dir\n";
	
	
	t=0;
	
	for(i=0;i<=n;i+=2){
		t=t+i;
	}
	cout << "0 dan " << n << " e kadar olan çift sayýlarýn toplamý " << t <<" dir\n";
	return 0;
}