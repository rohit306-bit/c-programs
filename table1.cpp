#include<iostream>

using namespace std;

int table(int n){
    int t=1;
    cout<<"Table of"<<n<<"is"<<endl;
    for(int i=1; i<=10; i++){

        t=n*i;

        cout<<n<<"*"<<i<<"="<<t<<endl;

    }
}

int main(){

    int n=0;

    cout<<"Enter the number"<<endl;
    cin>>n;
    table(n);

    return 0;
}