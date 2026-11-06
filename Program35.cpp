#include <iostream>
using namespace std;
void diziSirala(int* arr, int boyut) {
    if (arr == nullptr || boyut <= 1) return;
   
    for (int i = 0; i < boyut - 1; ++i) {
        for (int j = 0; j < boyut - i - 1; ++j) {
            
            if (*(arr + j) > *(arr + j + 1)) {
               
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}


void diziYazdir(const int* arr, int boyut) {
    for (int i = 0; i < boyut; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << "\n";
}

int main() {
	
    int boyut = 6;
    
    // Dinamik olarak işaretçi (pointer) üzerinden tanımlanan dizi
    int* sayilar = new int[boyut]{64, 25, 12, 22, 11, 90};

    cout << "Siralanmamis dizi: ";
    diziYazdir(sayilar, boyut);

    diziSirala(sayilar, boyut);

    cout << "Siralanmis dizi:   ";
    diziYazdir(sayilar, boyut);

    // Dinamik tahsis edilen belleği serbest bırakma
    delete[] sayilar;

    return 0;
}