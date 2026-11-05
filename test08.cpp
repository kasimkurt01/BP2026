#include <iostream>
#include <stdexcept>
using namespace std;

int enBuyukElemaniBul(const int* arr, int boyut) {
    if (arr == nullptr || boyut <= 0) {
        throw invalid_argument("Dizi bos veya gecersiz!");
    }

    
    int enBuyuk = *arr;

    
    for (int i = 1; i < boyut; ++i) {
        
        if (*(arr + i) > enBuyuk) {
            enBuyuk = *(arr + i);
        }
    }

    return enBuyuk;
}


const int* enBuyukElemanAdresi(const int* arr, int boyut) {
    if (arr == nullptr || boyut <= 0) return nullptr;

    const int* maxPtr = arr; // İlk elemanın adresi

    for (const int* ptr = arr + 1; ptr < arr + boyut; ++ptr) {
        if (*ptr > *maxPtr) {
            maxPtr = ptr;
        }
    }

    return maxPtr;
}

int main() {
    int boyut = 6;
    int* sayilar = new int[boyut]{14, 82, 35, 99, 41, 67};

    // 1. Değer döndüren yaklaşım
    int maxDeger = enBuyukElemaniBul(sayilar, boyut);
    cout << "En buyuk eleman: " << maxDeger << "\n";

    // 2. Pointer (adres) döndüren yaklaşım
    const int* maxAdres = enBuyukElemanAdresi(sayilar, boyut);
    if (maxAdres != nullptr) {
        cout << "En buyuk eleman (adresten okunan): " << *maxAdres << "\n";
        cout << "En buyuk elemanin dizideki indeksi: " << (maxAdres - sayilar) << "\n";
    }

    delete[] sayilar;
    return 0;
}