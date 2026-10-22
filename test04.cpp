#include <iostream>

// Fonksiyon prototipinde "double dizi[]" ile "double* dizi" aynidir
double toplamEnerjiHesapla(const double* enerjiDizisi, int N) {
    double toplam = 0.0;
    
    // Isaretciyi ilerleterek diziyi tarayalim
    for (int i = 0; i < N; ++i) {
        toplam += *(enerjiDizisi + i); // dizi[i] ile esdegerdir
    }
    
    return toplam;
}

int main() {
	using namespace std;
    const int N = 4;
    double kinetikEnerjiler[N] = {2.5e-18, 4.1e-18, 1.8e-18, 3.2e-18}; // Joule

    double toplam = toplamEnerjiHesapla(kinetikEnerjiler, N);

   cout << "Toplam Enerji: " << toplam << " J\n";
   cout << "Ortalama Enerji: " << (toplam / N) << " J\n";

    return 0;
}