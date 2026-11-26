#include<iostream>
#include<cstring>
using namespace std;
int Uzunluk(char *s1){
	int i;
	for(i=0; *s1 !='\0';i++) s1++;
	return i;
}

void cpystrk(char *s1, char *s2){
	while((*s2++=*s1++)!='\0');
}

void appndstrk(char *s1, char *s2){
	while(*s2!='\0') s2++;
	while((*s2++=*s1++)!='\0');
}
int main(){
	int i;
	setlocale(LC_ALL,"TURKISH");
	char st1[]="Bu gün hava";
	char st2[]= "çok güzel";
	char st3[80];
	for(i=0; i< strlen(st1); i++){
		cout << st1[i]  ;
	}
	cout << " ";
	for(i=0; i< strlen(st2); i++){
		cout << st2[i]  ;
	}
	cout << endl;
	for(i=0; i< strlen(st1); i++) st3[i]=st1[i];
	
	for(i=0; i< strlen(st2); i++) st3[i+strlen(st2)+2]=st2[i];
	
	for(i=0; i< strlen(st3); i++)		cout << st3[i]; 
	cout << "\nkelimenin uzunluðu " << Uzunluk(st1) << endl;
	cout << "\nkelimenin uzunluðu " << Uzunluk(st2) << endl;
	cout << "\nkelimenin uzunluðu " << Uzunluk(st3) << endl;
	for(i=0; i< strlen(st2); i++){
		cout << st2[i]  ;
	}
	//cpystrk(st2,st1);
	appndstrk(st1, st2);
	cout << "\nkelimenin uzunluðu " << Uzunluk(st1) << endl;
	cout << "\nkelimenin uzunluðu " << Uzunluk(st2) << endl;
	cout << "\nkelimenin uzunluðu " << Uzunluk(st3) << endl;
	for(i=0; i< strlen(st2); i++){
		cout << st2[i]  ;
	}
	
}