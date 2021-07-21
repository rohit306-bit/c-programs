#include<iostream>
using namespace std;

int volume(int a){
    return (a*a*a);
}
int volume(int l, int b, int h){
    return (l*b*h);
}

int volume(double r, int h){
    return (3.14*r*r*h);
}

int main(){

    cout<<"The volume of cuboid of 3, 7 and 6 is  "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cube of 3 side is  "<<volume(3)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is  "<<volume(3, 6)<<endl;
    

    return 0;
}