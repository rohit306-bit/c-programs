#include<iostream>
using namespace std;

//destructor never takes an arguments nor does it return any values

int count;

class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"THis is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};

int main(){

    cout<<"We are inside out main function "<<endl;
    cout<<"creating two objects "<<endl;
    num n1;
    {
        cout<<"Entering this block "<<endl;
        cout<<" Creating two more objects "<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main "<<endl;
    
    return 0;
}