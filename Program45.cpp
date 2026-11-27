#include<iostream>
#include<string>
using namespace std;

class Araba{
	private :
		string Marka;
		string Model;
		string Vites;
		string Renk;
	public :
		// kurucu fonsyon
		Araba(string mr, string md, string v, string r){
			Marka = mr;
		    Model = md;
			Vites = v;
			Renk  = r;
		}
		//yýkcý fonsiyon
		~Araba(){
		}
		// metod
		void Yaz(){
			cout << "Marka : " << Marka 
			     << "\nModel : " << Model
			     << "\nVites : " << Vites
			     << "\nRenk  : "  << Renk << endl;
		}
};

int main(){
	setlocale(LC_ALL,"TURKISH");
	Araba a("Opel","2026","Otomatik","Kýrmýz");
	Araba b("Tesla","2025","Otomatik","Siyah");
	cout <<"******Birinci araba******* \n";
	a.Yaz();
	cout <<"******Ýkinci araba******* \n";
	b.Yaz();
}