#include<iostream>
using namespace std;

template <class T>
class rohit{
    public:
    T data;
    rohit(T a){
        data = a;
    }
    void display();
};
template <class T>
void rohit<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<" I am first func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<" I am templatized func() "<<a<<endl;
}

int main(){
    // rohit<int> r(8);
    // rohit<float> r(8.56);
    // rohit<char> r('c');
    // cout<<r.data<<endl;
    // r.display();
    func1(4);//exact match takes the highest priority

    
    return 0;
}