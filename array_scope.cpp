#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int n){
    cout<< endl << "inside the function "<<endl;

    arr[0] = 120;
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"going back to the main function "<<endl;
}

int32_t main(){
    int arr[3] = {1,2,3};
    update(arr, 3);
    cout<<endl<<" printing in main function "<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;

}
