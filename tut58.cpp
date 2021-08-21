#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display()= 0; //do-nothing function -----> pure virtual function
};
//pure virtual function is used to create for abstract base class.
//abstract base class(abstract base class is not used to create objects it is used for derived the class) is class which having minimum one pure virtual function.
class CWHVideo : public CWH{
    float videoLength;
    public:
    CWHVideo(string s, float r, float vL) : CWH(s, r){
    videoLength = vL;
    }
    void display(){
        cout<<" This is amazing video with title "<<title<<endl;
        cout<<" Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<" Length of this video is: "<<videoLength<<" minutes"<<endl;
    }
};

class CWHText : public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc) : CWH(s, r){
    words = wc;
    }
      void display(){
        cout<<" This is amazing text tutorials with title "<<title<<endl;
        cout<<" Ratings of this text tutorials: "<<rating<<" out of 5 stars"<<endl;
        cout<<" no of words in this text tutorials is : "<<words<<" words"<<endl;
    }
};


int main(){
    string title;
    float rating , vlen;
    int words;

    //for CWH video
    title = " python tutorials";
    vlen = 4.56;
    rating = 4.5;
    CWHVideo python(title, rating, vlen);
//    python.display();

    //for CWH text
    title = " python tutorials text";
    words = 233;
    rating = 4.5;
    CWHText pythontext(title, rating, vlen);
    // pythontext.display();

    CWH* tuts[2];
    tuts[0] = &python;
    tuts[1] = &pythontext;
    tuts[0] ->display();
    tuts[1] ->display();
   
    
    return 0;
}

//rules fro virtual functions
/*
1.)they cannot be static.
2.)they are accessed by object pointer.
3.)virtual function can be a friend of another class.
4.)a virtual function in base class might not be used.
5.)a virtual function is defined in a base class , there is no necessity of redefining it in the derived class.
*/