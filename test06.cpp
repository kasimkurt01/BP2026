#include <iostream>

int main() {
    int satir = 3;  // y ekseni adim sayisi
    int sutun = 4;  // x ekseni adim sayisi

    // 1. Adim: Satirlari tutacak isaretci dizisini ayir
    double** V = new double*[satir];

    // 2. Adim: Her satir icin sutun genisliginde bellek tahsis et
    for (int i = 0; i < satir; ++i) {
        V[i] = new double[sutun];
    }

    // 3. Adim: Diziye ornek potansiyel degerleri ata: V(x, y) = x*y
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            V[i][j] = i * 1.5 + j * 0.5; // Ornek fiziksel alan formulu
        }
    }

    // Ekrana matris formatinda yazdir
    std::cout << "--- 2D Potansiyel Izgarasi V[y][x] (Volt) ---\n";
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            std::cout << V[i][j] << "\t";
        }
        std::cout << "\n";
    }

    // 4. Adim: Bellek Temizligi (Ters sirayla yapilmalidir!)
    for (int i = 0; i < satir; ++i) {
        delete[] V[i]; // Once her satirdaki veriyi sil
    }
    delete[] V;       // Sonra satir isaretcilerini tutan diziyi sil
    V = nullptr;      // Guvenlik onlemi

    std::cout << "\nBellek basariyla serbest birakildi.\n";

    return 0;
}