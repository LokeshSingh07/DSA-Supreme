#include<iostream>
using namespace std;


int binarySearch(int arr[], int start, int end, int target){
    // base case
    if(start > end){
        return -1; 
    }

    // processing  -> 1 case khud se solve kro
    int mid = start + (end-start)/2;
    
    // aagr element mil gya
    if(arr[mid] == target){
        return mid;
    }

    //baaki recusion sambhal lega
    if(arr[mid] < target){
        // right me jao
        return binarySearch(arr, mid+1, end, target);
    } 
    else{
        // left me jao
         return binarySearch(arr, start, mid-1, target);
    }

}




int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;
    int target = 20;

    int index = binarySearch(arr, start, end, target);
    if(index != -1){
        cout<<"Target found at index : "<<index<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }


return 0; 
}