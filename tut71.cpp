#include<iostream>
#include<vector>


using namespace std;
template < class T>
void display(vector<T> &v){
    cout<<" Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";

    }
    cout<<endl;
    
}

int main(){
    // ways to create a vector
    vector<int> vec1;// zero length vector
    vector<char> vec2(4); // 4-element character vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(6, 3); //6 element vector of 3s
    // vec2.push_back('5');
    // display(vec2);
    // display(vec3);
    display(vec4);
    cout<<vec4.size();

    int ele, size=5;
   // cout<<" Enter the size of vector"<<endl;
    //cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<" Enter an element to add to this vector "<<endl;
    //     cin>>ele;
    //     vec1.push_back(ele);
    // }
   // vec1.pop_back(); //delete the last element
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,50, 566);
    // display(vec1);
    
    return 0;
}