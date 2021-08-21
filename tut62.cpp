#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"This is hero \n";
    out<<"This is hero \n";
    out<<"This is hero \n";
    out<<"This is hero";
    out.close();    

    ifstream in;
    string st;
    in.open("sample60.txt");
    in>>st;
    // cout<<st;
    // getline(in, st); here it is not working here i am not using string header file 
    while (in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    in.close();
    return 0;
}