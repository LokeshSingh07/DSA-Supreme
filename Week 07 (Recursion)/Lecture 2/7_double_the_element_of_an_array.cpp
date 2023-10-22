#include<iostream>
#include<limits.h>
using namespace std;


void doubleArray(int arr[], int size, int index){
    // base case --> out of bound
    if(index >= size){
        return;
    }

    // Processing
    arr[index] = arr[index]*2;

    // Recursive call
    doubleArray(arr, size, index+1);
}   



int main(){
    int arr[] = {40,13,44,6,2};
    int size = sizeof(arr)/sizeof(int);
    int index = 0;

    cout<<"Before : ";
    for(auto it: arr){
        cout<<it<<" ";
    }


    doubleArray(arr, size, index);


    cout<<"\nAfter : ";
    for(auto it: arr){
        cout<<it<<" ";
    }


return 0;
}