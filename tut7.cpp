#include<iostream>

using namespace std;



 int c = 45;               /* This variable is globally declared*/
int main(){

    // int a, b, c;
    // cout<<"Enter the values of A: "<<endl;
    // cin>>a;

    // cout<<"Enter the values of B: "<<endl;
    // cin>>b;

    // c = (a+b);

    // cout<<"sum of the given number is: "<<c<<endl;
    // cout<<" This is global c: "<<::c<<endl;   
    /* by using scope resolution operator we can access the global v
    ariable values in the progrma print out it */

    // float d=34.4f;
    // long double e = 35.4l;

    // cout<<" The value of D is "<<d<<endl;
    // cout<<" The value of E is "<<e<<endl;



//===================================REFERENCE VARIABLES=====================================//

// ROHAN----->MONTY----->ROHU------>DANGEROUS CODER  BUT THEY ALL ARE SAME 

// float x=455;
// float &y = x;
// cout<<x<<endl;
// cout<<y<<endl;


//===================================typecasting===================================================//
//typecasting: it means we convert one data types into other data types by using some method and syntax

int a = 45;
float b = 45.46;

cout<<" The value of A is "<<(float)a<<endl;
cout<<" The value of A is "<<float(a)<<endl;



cout<<" The value of B is "<<(int)b<<endl;
cout<<" The value of B is "<<int(b)<<endl;

int c = int(b);

cout<<"The experession is "<<a+b<<endl;
cout<<"The experession is "<<a + (int)b<<endl;
cout<<"The expression is "<<a + int(b)<<endl;


    return 0;
}