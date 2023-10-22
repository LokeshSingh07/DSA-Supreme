#include<iostream>
using namespace std;


void occurrence(int arr[], int size, int index, int target){
    // base case
    if(index >= size){
        return;
    }

    // processing
    if(arr[index] == target){
        cout<<index<<" ";
    }

    // Recursive call
    occurrence(arr, size, index+1, target);
}



int main(){
    int arr[] = {10,20,10,40,30,10,323,20,10};
    int size = sizeof(arr)/sizeof(int);
    int index = 0;
    int target = 10;

    occurrence(arr, size, index, target);


return 0;
}