#include<bits/stdc++.h>
using namespace std;


void xorMethod(int arr[], int n){
    int ans = 0;

    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }

    cout<<"Result is : "<<ans<<endl;
}




int binarySearch(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start <= end){
        

    }

    return -1;
}


int main(){
    int arr[] = {1,1,5,5,2,2,3,3,2,4,4};
    int n = sizeof(arr)/sizeof(int);

    // Method 1 --> using XOR
    xorMethod(arr, n);

    // Method 2 --> using map, count the unique elements frequency
    // mapMethod(arr, n);


    // Method 3 --> sorting, count which appears three times and return it


    // Method 4 --> 
    binarySearch(arr, n);


return 0;
}