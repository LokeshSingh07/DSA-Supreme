#include<iostream>
using namespace std;


bool checkSorted(int *arr, int size, int index){
    // base case
    if(index >= size){
        return true;
    }

    // processing
    if(arr[index] > arr[index-1]){
        // aage check krna padega
        bool aageKaAns = checkSorted(arr, size, index+1);
    }
    else{
        // sorted nhi h
        return false;
    }

}

int main(){
    int arr[] = {10,20,30,70,50};
    int size = 5;
    int index = 1;

    bool isSorted = checkSorted(arr,size, index);

    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }



return 0; 
}