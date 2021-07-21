#include<iostream>
using namespace std;

int main(){
    
    //what is a pointer------> it is a data type which holds the address of other data types
    //&------> address of operator(it holds the address of operator)
    //*------> dereference operator

    int a=3;
    int *b=&a;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The value at address of b is: "<<*b<<endl;

    //POINTER TO POINTER 

    int **c = &b;
    cout<<"THe addres of b is: "<<&b<<endl;
    cout<<"The addresss of b is: "<<c<<endl;
    cout<<" The value at address b is: "<<*c<<endl;
    cout<<"The valur at address value_at(value_at(C)) is: "<<**c<<endl;
    return 0;
}