#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.14157;

class Ornek{
	private :
		int veri1, veri2;
		public :
			Ornek(int v1, int v2) {
			veri1=v1;
			veri2=v2; 
			}
			int topla(){
				return veri1+ veri2;
			}
			void Yaz(){
				int t;
				t=topla();
				cout << "Toplam :" << t <<"\n";
			}
			~Ornek(){
			}
};

int main(){
	Ornek k(8,6);
	k.Yaz();
}