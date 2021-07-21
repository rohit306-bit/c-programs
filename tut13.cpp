#include<iostream>
using namespace std;

int main(){
    int marks[] = {23, 45, 56, 67};

    cout<<"these are the marks"<<endl;

    for(int i=0; i<4; i++)
    {
        cout<<"this value "<< i <<" is "<<marks[i]<<endl;
    }
    return 0;
}