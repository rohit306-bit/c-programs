#include<bits/stdc++.h>
using namespace std;

void printArray( int arr[], int n){

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

void reverse(int arr[], int n){

    int start = 0;
    int  end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int32_t main(){
    
    int arr[6] = {1,2,-4,6,7,0};
    int brr[5] = {4,6,5,7,8};
    

    reverse(arr,6);
    printArray(arr,6);

    reverse(brr,5);
    printArray(brr,5);
}