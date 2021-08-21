#include<iostream>
using namespace std;
template <class T1=int, class T2=float, class T3 = char> 
class rohit{
    public:
    T1 a;
    T2 b;
    T3 c;
    rohit(T1 x, T2 y, T3 z) {
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<" The value of a is "<<a<<endl;
        cout<<" The value of b is "<<b<<endl;
          cout<<" The value of c is "<<c<<endl;
    }

};

int main(){
    rohit<> r(7, 8.9, 'd');
    r.display();
    cout<<endl;
    rohit<float, char, char> s(7.9, 'e', 'd');
    s.display();
    
    return 0;
}