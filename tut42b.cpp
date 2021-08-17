#include<iostream>
#include<cmath>
using namespace std;

/*
1. SimpleCalculator- takes input of 2 numbers using a utility function and perform +,-,*,% and displays the result using another function
2. ScientificCalculator - takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function

create another class HybridCalculator and inherit it using these 2 classes:

Q1.what type of inheritance are you using?
Q2.which mode of inheritance are you using?
Q3.create an object of HybridCalculator and display results of simple and scientific calculator.
Q4.how is code reusability implemented.
*/
class simpleCalculator{
    int a,b;
    public:
    void getDataSimple(){
        cout<<" Enter the value of A: "<<endl;
        cin>>a;
        cout<<"Enter the value of B: "<<endl;
        cin>>b;
    }
    void performOperationsSimple(){
        cout<<" The value of a + b : "<< a + b<<endl;
        cout<<" The value of a - b : "<< a - b<<endl;
        cout<<" The value of a * b : "<< a * b<<endl;
        cout<<" The value of a / b : "<< a / b<<endl;
    }

};

class scientificCalculator{
       int a,b;
    public:
    void getDataScientific(){
        cout<<" Enter the value of A: "<<endl;
        cin>>a;
        cout<<"Enter the value of B: "<<endl;
        cin>>b;
    }
    void performOperationsScientific(){
        cout<<" The value of cos(a) : "<< cos(a)<<endl;
        cout<<" The value of sin(a): "<< sin(a)<<endl;
        cout<<" The value of exp(a) : "<< exp(a)<<endl;
        cout<<" The value of tan(a) : "<< tan(a)<<endl;
    }

};

class HybridCalculator : public simpleCalculator, public scientificCalculator{

};


int main(){
    //simpleCalculator calc;
    // scientificCalculator calc;
    // calc.getData();
    // calc.performOperations();
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();

    
    return 0;
}