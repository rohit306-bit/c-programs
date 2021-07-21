#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eID;
    char favchar;
    float salary;

} ep;

//better memory management in c++,memory share in union we use one data type at a time .
 union money
{
    /* data */
    int rice;
    char car;
    float pounds;

};


int main(){
    ep rohit;

    enum Meal{ breakfast, lunch, dinner};
    Meal m1=lunch;
    cout<<m1;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice;
    // rohit.eID = 1;
    // rohit.favchar = 'r';
    // rohit.salary = 1200000;
    // cout<<"the value is "<<rohit.eID<<endl;
    // cout<<"the value is "<<rohit.favchar<<endl;
    // cout<<"the value is "<<rohit.salary<<endl;
    

    return 0;
}