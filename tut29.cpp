#include<iostream>
using namespace std;

//classes is a custom data types
class Complex{
    int a,b;
    //creating a constructor 
    public:
    //constructor is a special member functiom with same name as of the class. it is automatically invoked whenever an object is created. 
    //it is uesd to initialize the objects of its class
    Complex(void); //constructor declaration
    
    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex:: Complex(void)   ///------This is default constructor
{
    a = 10;
    b = 0;
}

int main(){
    
    Complex c1,c2,c3;
    c1.printNumber();
     c2.printNumber();
      c3.printNumber();
    
    return 0;
}

/*
1.) it should be declared in the public section of the class
2.)They are automatically invoked whenever the object is created
3.)They cannot return values and do not have return types
4.) It can have default arguments
5.)We cannot refer to their address.




*/