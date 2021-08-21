#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //connecting our file with rout stream.
    ofstream rout("sample60.txt");
    

    //creating a name string and filling it with the string entered by the user.
     string name;
    cout<<" Enter your name ";
    cin>>name;

    //writing a string to the file 
    rout<<" My name is "+ name; 
      rout.close();   

    ifstream rin("sample60.txt");
    string content;
    rin>>content;
    cout<<" The content of this file is: "<<content;
    rin.close();
    return 0;
}