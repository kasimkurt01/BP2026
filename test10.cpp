#include<iostream>
using namespace std;
// tanýmlamalr
class Complex{
	private :
		double Real;
		double Img;
	public :
		Complex(double =0.0, double =0.0);
};

// uygulama

Complex::Complex(double real, double img){
	Real=real;
	Img=img;
	cout << "Yeni bir kompleks sayý nesnesi yaratma = "
	      << Real << " + " << Img  << "i\n"; 
}

int main(){
	setlocale(LC_ALL, "TURKISH");
	Complex a;
	Complex b(6.8 , 9.7);
	Complex c(7.0 , 5.0);
	return 0;
}