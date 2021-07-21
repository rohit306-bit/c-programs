#include<iostream>
using namespace std;

//inline is used to replace the entire process and make a reusable program in cache memory to it avoid long method but
//it is not for large function because it consume large cache memory to it reduce the prorgam relablity and memory

//not use inline function in RECURSSION
//not use inline function in STATIC variable 
//inline function is a request for compiler so it may be ccept or not ,it depends on compiler.tut18
inline int product(int a, int b){
    return a*b;

}

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;

}
int main(){
    int a,b;
    int money = 100000;
    cout<<"it you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<< " Rs after 1 year"<<endl;
    cout<<"it you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<< " Rs after 1 year"<<endl;
    // cout<<"Enter the value of a "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    

    return 0;
}