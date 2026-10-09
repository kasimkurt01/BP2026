#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x = 1.5;
    double term = 1.0;
    double sum = 0.0;
    int n = 0;
    const double eps = 1e-8;

    while (fabs(term) > eps) {
        sum += term;
        n++;
        term = term * (x / n); // O(1) ardışık terim hesabı
    }

    cout << fixed << setprecision(8);
    cout << "Hesap: " << sum << ", exp: " << exp(x) 
         << ", Adim sayisi: " << n << endl;

    return 0;
}