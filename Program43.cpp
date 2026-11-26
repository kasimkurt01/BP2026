#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.14157;
class Kure {
	private :
// üyelerin tanýmlanmasý
    int r;
    float A,H;
	public :
//üye foksyonlarýn prototipleri	
    Kure(int a){ // Kurucu fonsiyon
    	r=a;
    	Alan();
    	Hacim();
    	Yaz();
	}
    
    	
	void Alan(){
   	A=4*PI*r*r;
   }
   void Hacim(){
   	H=4/3*PI*pow(r,3);
   }
   void Yaz(){
   	cout << "Yarýçapý " << r <<" Olan Kurenin \n";
   	cout << "Alan :" << A << "\nHacim :" << H <<endl;
   }
    
  ~Kure(){
  }
	 
};

int main(){
	setlocale(LC_ALL,"TURKISH");
	Kure k1(5),k2(6);
	
	Kure l(8);
	
	
	
}
