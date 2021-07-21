#include<iostream>
using namespace std;
//function prototype
//type function-name (arguments);

int sum(int a, int b);//-->accepted
//int sum(int a, b)--> not accepted
//int sum(int , int)----> accepted

int main(){
    
    int num1, num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    //num1 and num2 are actual parameter in this program
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    return 0;
}

int sum(int a, int b){

    //formal parameter : this is used within the function ,a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;

}