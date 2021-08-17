#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : protected Base
{
};
/*
for protected member
                    public derivation    private derivation    protected derivation
    1.private          not inherited         not inherited     not inherited   
    2.protected        protected            private            protected
    3.public           public               private             protected
*/

int main()
{
    Base b;
    Derived d;
    //cout<<d.a;//will not worksince a is protected in both base as well as derived class

    return 0;
}