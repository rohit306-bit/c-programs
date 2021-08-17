#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
    void getData(){
        cout<<" The real part is "<<real<<endl;
        cout<<" The imaginary part is "<<imaginary<<endl;
    }
    void setData( int a, int b){
        real = a;
        imaginary = b;
    }
};

int main(){

    Complex c1;
    // c1.setData(1, 67);
    // c1.getData();
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(1, 67); //bracket is important int representaion of pointer
    // (*ptr).getData();
    //arrow means deference 
    //ptr ->setData();
    ptr->setData(1,67);
    ptr->getData();

    //Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,57);
    ptr1->getData();


    
    return 0;
}