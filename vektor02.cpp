// Vektörlerde kapasite fonksiyonu
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL,"TURKISH");
	vector<float> g1;

	float a;
	for (int i = 1; i <= 11; i++){
		a=3.14*i*i;
		g1.push_back(a);
			
	}

	cout << "Boyut : " << g1.size();
	cout << "\nKapasite :" << g1.capacity();
	cout << "\nMak_Boyut : " << g1.max_size();

	
	g1.resize(10);

	
	cout << "\nBoyut : " << g1.size();

	
	if (g1.empty() == false)
		cout << "\nVektor Dolu";
	else
		cout << "\nVektor boþ";

	
	g1.shrink_to_fit();
	cout << "\nVektor elemanlarý: ";
	for (auto it = g1.begin(); it != g1.end(); it++)
		cout <<"Alan\t" << *it << " \n";

	return 0;
}
