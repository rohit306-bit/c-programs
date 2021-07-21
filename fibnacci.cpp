#include<iostream>
using namespace std;

//it add the number according to their index in array.
//recursion is not good for all case.

int fib(int n){
    if(n<2){
        return 1;
    }

    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<< a <<" is "<<fib(a)<<endl;

    return 0;
}