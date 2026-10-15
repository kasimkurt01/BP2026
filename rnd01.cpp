#include <iostream>
#include <random>
using namespace std;
int main() {
    // Rastgele sayý üreteci için cihaz motoru
    random_device rd;
    mt19937  gen(rd()); 
    
    // 1 ile 100 arasýnda düzgün (uniform) daðýlýmlý tamsayý aralýðý
    uniform_int_distribution<int> dis(1, 100);

    for (int i = 0; i < 10; ++i) {
        cout << dis(gen) << " ";
    }
    return 0;
}