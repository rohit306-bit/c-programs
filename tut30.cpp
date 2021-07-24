#include <iostream>
using namespace std;

//classes is a custom data types
class Complex
{
    int a, b;

public:
    Complex(int, int);

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(int x, int y) ///------This is parameterized  constructor as it takes two parameter
{
    a = x;
    b = y;
}

int main()
{
    //implicit call
    Complex a(4, 6);
    a.printNumber();

    //explicit call

    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}