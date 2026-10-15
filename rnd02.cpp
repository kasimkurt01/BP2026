#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Her çalıştırmada farklı sayı üretmesi için zamanı tohum (seed) olarak veriyoruz
    srand(std::time(nullptr));

    // 0 ile 99 arasında rastgele sayı üretmek için:
    int rastgeleSayi = rand() % 100; 

    cout << "Rastgele Sayi: " << rastgeleSayi << std::endl;
    return 0;
}