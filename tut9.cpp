#include<iostream>

using namespace std;

int main(){

    // selection control structure-switch case

    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        /* code */
        cout<<"you are 18"<<endl;
        break;

         case 22:
        /* code */
        cout<<"you are 22"<<endl;
        break;

         case 2:
        /* code */
        cout<<"you are 2"<<endl;
        break;
    
    default:
    cout<<"no special case";
        break;
    }

// selection control structure-if /esle-if / else ladder

   // cout<<"This is tutorial 9"<<endl;
//    int age;
//    cout<<"Tell me your age"<<endl;
//    cin>>age;
//    if((age<18) &&(age>0)){
//        cout<<"you can not come to the party"<<endl;

//    }
//    else if(age==18){
//        cout<<"you are kid and you get kid pass of the party"<<endl;
//    }

//    else if(age<1){
//        cout<<"you are not yet born"<<endl;
//    }
//    else{
//        cout<<"you come the party "<<endl;
//    }
    return 0;
}