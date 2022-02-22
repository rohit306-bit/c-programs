#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}


void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }

}

int32_t main(){
    int odd[5] = {1,2,3,4,5};
    int even[6] = {6,7,8,9,10,11};

    swapAlternate(odd, 5);
    printArray(odd, 5);

    cout<< endl;

    swapAlternate(even, 6);
    printArray(even,6);
    
}