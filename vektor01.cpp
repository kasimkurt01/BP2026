// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
setlocale(LC_ALL,"TURKISH");
	vector<float> g1;
	vector<int>  g2;
  float a;
	for (int i = 1; i <= 11; i++){
		a=3.14*i*i;
		g1.push_back(a);
		g2.push_back(i);		
	}
		

	cout << "Çıktılar1\n ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << "\t "<< "kasim\n";
cout << "Çıktılar2\n ";
	for (auto i = g2.begin(); i != g2.end(); ++i)
		cout << *i << "\t "<< "kasim\n";
	return 0;
}
