#include<iostream>
#include<cmath>
using namespace std;
struct kure{
	double r;
	double A;
	double H;
};
class Kure {
	private :
// üyelerin tanýmlanmasý
    int veri;
	public :
		
//üye foksyonlarýn prototipleri	
   void VeriAta(int a){
   	veri=a;
   }
   void VeriYaz(){
   	cout << "Veri :" << veri << endl;
   }	
};
const double PI=3.14157;
int main(){
	setlocale(LC_ALL, "TURKISH");
	kure k1;
	k1.r=10;
	k1.A=4*PI*k1.r*k1.r;
	k1.H=4/3*PI*pow(k1.r,3);
	
	cout << "Kurenin alaný :" << k1.A
	     << "\nKurenin Hacmi :" << k1.H << endl;
	     
	Kure K1;
	K1.VeriAta(5);
	K1.VeriYaz();
}