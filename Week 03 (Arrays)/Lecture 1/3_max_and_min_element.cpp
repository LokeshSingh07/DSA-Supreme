#include<iostream>
#include<limits.h>
using namespace std;



int minElement(int arr[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}


int maxElement(int arr[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}


int main(){
    int arr[] = {11,25,23,12,63,45,32,99,44,16};
    int n=10;

    cout<<"Max element is: "<<maxElement(arr,n)<<endl;
    cout<<"Min element is: "<<minElement(arr,n)<<endl;
    


return 0;
}