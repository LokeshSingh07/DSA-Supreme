#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {2,4,6,3,7,4};
    int n=6;

    printArray(arr, n);



return 0;
}