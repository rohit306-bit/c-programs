#include<iostream>
#include<string>
using namespace std;

class binary{

    //private: by default
    string s;

    public: 
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){

    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binry format "<<endl;
            exit(0);
        }
    }
    
}

void binary :: ones(void){

    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    
}

void binary :: display(void){

    cout<<"Displaying your binary number " <<endl;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        cout<<s.at(i);
    }
    cout<<endl;
    
}

int main(){
    //oops class and objects
    //nesting of member function

    binary b;
    b.read();
  //  b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}