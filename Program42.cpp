#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.14157;
class Kure {
	private :
// üyelerin tanımlanması
    int r;
    float A,H;
	public :
		
//üye foksyonların prototipleri	
   void VeriAta(int a){
   	r=a;
   }
   void Alan(){
   	A=4*PI*r*r;
   }
   void Hacim(){
   	H=4/3*PI*pow(r,3);
   }
   void VeriYaz(){
   	cout << "Alan :" << A << "\nHacim :" << H <<endl;
   }	
};

int main(){
	Kure k1;
	k1.VeriAta(5);
	k1.Alan();
	k1.Hacim();
	k1.VeriYaz();
}
