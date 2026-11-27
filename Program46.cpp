#include<iostream>
#include<string>
using namespace std;

class Ogrenci{
	private :
		string Adi;
		string No;
		string DAdi;
		double V1;
		double F1;
		double B1;
		
	public :
		Ogrenci(string a, string n, string da, double vv1, double ff1 ){
			Adi=a;
			No=n;
			DAdi=da;
			V1=vv1;
			F1=ff1;
			Basari();
			Yaz();
			
		}
		~Ogrenci(){
		}
		void Basari(){
			B1=V1*0.4+F1*0.6;			
		}
		void Yaz(){
			
			cout << "\nAdi : " << Adi
				<< "\nNo : " << No
				<< "\nDers Adi : " << DAdi
				<<  "\nVize : " << V1
				<< "\nFinal : " << F1
				<< "\nBaþarý : " << B1;
		}
		
};

int main(){
	setlocale(LC_ALL,"TURKISH");
	Ogrenci o1("Ahmet","202610201","Fizik",60.0,70.0);
	
	Ogrenci o2("Mehmet","10201","Kimya", 50,100);
	
	cout << "***** Ýkinci Öðrenci *******\n";

}