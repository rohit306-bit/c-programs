#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
    Point(int a, int b){
        x =a;
        y = b;
    }

    void displayPoint(){
        cout<<"The point is ("<< x <<" , "<< y <<")"<<endl;
    }

};

//create a function (hint: make it a friend function) which takes 2 point object and computes the distance between those 2 points.
//use these examples to check your code
//distance between (1,1) and (1,1) is 0;
//distance between (0,1) and (0,6) is 5;
//distance between (1,0) and (70,0) is 69;
int main(){

    Point p(1,1);
    p.displayPoint();

    Point q(4,6);
    q.displayPoint();
    
    return 0;
}