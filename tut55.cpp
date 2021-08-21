#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << " Displying BAse class variable var1 " << var_base << endl;
    }
};

//base class pointer points to the derived class object

class DerivedClass : public BaseClass
{

public:
    int var_derived;
    void display()
    {
        cout << " Displying derived class variable var1 " << var_derived << endl;
        cout << " Displying Base class variable var1 " << var_base << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;//here base class pointer points the derived class object
    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}