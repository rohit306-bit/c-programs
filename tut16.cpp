#include<iostream>
using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }
//this will not swap a and b
// int swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;

// }

//call by reference using pointer.
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//call by refernce using c++ reference variable
void swapReferenceVar(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;

}

int main(){

    int x= 4, y=5;
    
    //cout<<"Tne sum of 4 and 5 is "<<sum(4 , 5);
    cout<<"The value of x is "<<x<< " and the value of y is "<<y<<endl;
    //swap(x,y);//this will not swap a and b
   // swapPointer(&x, &y); this will swap item using pointer reference
   swapReferenceVar(x, y); // this will swap item using reference variable.
    cout<<"The value of x is "<<x<< " and the value of y is "<<y<<endl;
    return 0;
}