#include <iostream>

int main() {
    // 5 farklý zaman adýmýndaki hýz ölçümleri (m/s)
    double hiz[5] = {10.5, 12.0, 14.2, 11.8, 9.4};

    // Dizi adý, ilk elemanýn adresini gösteren bir iþaretçi gibidir
    double* ptr = hiz; // ya da: double* ptr = &hiz[0];

    std::cout << "--- Dizi Indisleme vs Isaretci Aritmetigi ---\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Indis hiz[" << i << "] = " << hiz[i] 
                  << " | Adres: " << (ptr + i) 
                  << " | Isaretci ile Deger: " << *(ptr + i) << "\n";
    }

    return 0;
}
