#include <iostream>
using namespace std;


/*PROPERTIES OF FRIENDS FUNCTION   
1.)NOT IN THE SCOPE OF CLASS
2.)SINCE IT IS NOT IN THE SCOPE OF CLASS , IT CANNOT BE CALLED FROM THE OBJECT OF THAT CLASS C1.sumComplex
3.) can be invoked without the help of any object
4.) usually contains the object as argument
5.) can be declared inside thge public or private section of the class.
6.)it cannot access the members directly by their names and need object_name. member_name to acces any member.
*/

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}