#include<iostream>
#include<iomanip>

using namespace std;

int main(){

// constants in c++

// const float a=3.14;
// cout<<"The value of pi is: "<<a<<endl;






//=======================manipulator==================================//

//==================endl;     setw(); ================================//
// int a =3, b = 78, c = 12333;
// cout<<"The value of A  without setw is "<<a<<endl;
// cout<<"The value of B without setw is "<<b<<endl;
// cout<<"The value of C without setw is "<<c<<endl;




// cout<<"The value of A is "<<setw(4)<<a<<endl;
// cout<<"The value of B is "<<setw(4)<<b<<endl;
// cout<<"The value of C is "<<setw(4)<<c<<endl;


//============================OPERATOR PRECEDENCE IN C++============================================//


int a=5, b=6;
int c =((((a*5)+b)-45)+87);
cout<<c;
    return 0;
}