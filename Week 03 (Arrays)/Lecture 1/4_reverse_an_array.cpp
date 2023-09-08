#include<iostream>
#include<limits.h>
using namespace std;



void reverseArray(int arr[], int start, int end){
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n=9;

    reverseArray(arr, 0, n-1);
    printArray(arr,n);


return 0;
}