#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //function objects(functor): function wrapped in a class so that it available like an object.
    int arr[] = {1,3,45,5,64,24,71,8};
    sort(arr, arr+8, greater<int>());
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}