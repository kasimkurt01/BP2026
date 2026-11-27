#include <iostream>
#include <cmath> // abs() fonksiyonunun sorunsuz çalýþmasý için eklendi

using namespace std;

// declaration section
class Complex
{
    // prototype for the overloaded insertion operator
    friend ostream& operator<<(ostream&, const Complex&);

private:
    double Real;
    double Img;

public:
    Complex(double real = 0.0, double img = 0.0) // inline constructor
    { 
        Real = real; 
        Img = img; 
    }
};

// overloaded insertion operator function
ostream& operator<<(ostream& out, const Complex& num)
{
    char sign = '+';                      // set the
    if (num.Img < 0) sign = '-'; // correct sign

    if (num.Real == 0 && num.Img == 0)
        out << 0;
    else if (num.Img == 0)
        out << num.Real;
    else if (num.Real == 0)
        out << num.Img << 'i';
    else
        out << num.Real << ' ' << sign << ' '
            << abs(num.Img) << 'i';

    return out;
}

int main()
{
    Complex cmplx(12.5, -18.2);
    cout << "The complex number just created is " << cmplx << endl;

    return 0;
}