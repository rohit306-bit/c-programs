#include<bits/stdc++.h>
using namespace std;

int getMin(int num[], int n){
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        // if(num[i]<min){
        //     min = num[i];
        // }
        mini = min(mini, num[i]);

    }
    return mini;
}
int getMax(int num[], int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        // if(num[i]>max){
        //     max = num[i];
        // }
            maxi = (maxi, num[i]);
    }
    return maxi;
}

int32_t main(){
    int size;
    cout<<"Enter the size of array "<<endl;
    cin>>size;

    int num[100];
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<" Maximum value is "<<getMax(num,size) <<endl;
    cout<<" Minimum value is "<<getMin(num,size) <<endl;

}