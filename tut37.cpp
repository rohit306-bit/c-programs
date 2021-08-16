#include <iostream>
using namespace std;

//base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

//derived class
//syntax of derived class
//class derived-class-name : visibility-mode base class -name
//default visibility mode is private
//public visibility mode: public members of the base class becomes public members of the derived class.
//private visibility mode: public members of the base class becomes private members of the derived class.
//private members are never inherited
class Programmer : Employee
{

public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{

    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(1);
    cout<<skillF.languageCode<<endl;
    skillF.getdata();


    return 0;
}