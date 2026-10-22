#include <iostream>

int main() {
	using namespace std;
    // 3 ayri parcacigin (x, y, z) koordinatlari
    double p1[3] = {0.0, 1.5, 3.0};
    double p2[3] = {2.0, -1.0, 4.2};
    double p3[3] = {-3.5, 0.0, 1.1};

    // Elemanlari 'double*' olan 3 elemanli bir pointer dizisi
    double* sistem[3];
    sistem[0] = p1;
    sistem[1] = p2;
    sistem[2] = p3;

    cout << "--- Parcaciklarin Z Bilesenleri ---\n";
    for (int i = 0; i < 3; ++i) {
        // sistem[i] bir adrestir (pi dizisinin basi)
        // sistem[i][2] ise ilgili parcacigin z bileşenidir (*(sistem[i] + 2))
        cout << "Parcacik " << (i + 1) << " Z konumu: " << sistem[i][2] << " m\n";
    }

    return 0;
}