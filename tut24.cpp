#include <iostream>
using namespace std;

//static varaible is a class varaible,it is property of class not object.
//it initialize with zero
//there is only one copy for entire class which is maintained by compiler in class
//scope within class
//lifetime whole program until it is not terminated by user
//all object access one count variable
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of this empolyee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){

        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee ::count; //default value of static variable is 0

int main()
{

    Employee rohit, sujit, anukaran;

    rohit.setData();
    rohit.getData();
    Employee::getCount();


    sujit.setData();
    sujit.getData();
    Employee::getCount();    

    //static function only access the other static member and static function
    


    anukaran.setData();
    anukaran.getData();
    Employee::getCount();    


    return 0;
}