#include<iostream>
using namespace std;


// neagative marking method
void findMissing(int arr[], int n){
    for(int i=0; i<n; i++){
        int index = abs(arr[i]);

        if(arr[index - 1] > 0){
            arr[index - 1] *= -1;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
}



// sorting + swapping methods
void findMissing2(int arr[], int n){
    int i=0;
    while(i<n){
        int index = arr[i]-1;
        if(arr[i] != arr[index]){
            swap(arr[i], arr[index]);
        }
        else{
            i++;
        }
    }

    // print
    for(int i=0; i<n; i++){
        if(arr[i] != i+1){
            cout<<i+1;
        }
    }
}




int main(){
    int arr[] = {1,3,5,3,4};
    int n;

    n = sizeof(arr)/sizeof(int);

    findMissing2(arr, n);



return 0;
}