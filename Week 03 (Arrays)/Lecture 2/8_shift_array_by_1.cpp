#include<iostream>
using namespace std;



void shiftArray(int arr[], int n){
    // step1: store the last element
    int temp = arr[n-1];

    // step2: shift -> arr[i] = arr[i-1]
    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }

    // step3
    arr[0] = temp;

}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {10,20,30,40,50,60};
    int n= 6;

    
    cout<<"Array before shifting : "<<endl;
    printArray(arr, n);
    
    shiftArray(arr, n);

    cout<<"\nArray after shifting : "<<endl;
    printArray(arr, n);





return 0;
}