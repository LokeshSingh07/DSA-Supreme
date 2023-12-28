#include<iostream>
using namespace std;



// Heapify function (MAX) -> using recursion
void heapify(int arr[], int n, int index){
    int leftIndex = 2*index;
    int rightIndex = 2*index + 1;

    // step1: Check kro Teeno (current node, leftnode, rightnode) me se bada kon h
    int largestKaIndex = index;
    if(leftIndex<=n && arr[leftIndex] > arr[largestKaIndex]){
        largestKaIndex = leftIndex;
    }
    if(rightIndex<=n && arr[rightIndex] > arr[largestKaIndex]){
        largestKaIndex = rightIndex;
    }


    // after these 2 conditions largestKaIndex will be ponting towards largest element among 3
    if(largestKaIndex == index){
        return;
    }
    else{
        swap(arr[largestKaIndex], arr[index]);
        
        // baaki recurion sambhal lega
        heapify(arr, n, largestKaIndex);
    }


}




void buildHeap(int arr[], int n){
    for(int index=n/2; index>0; index--){
        // har ek element ko uski correct position pr le jao (n/2 -> 1)
        heapify(arr, n, index);
    }
}


void print(int *arr){
    for(int i=1; i<=6; i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    int arr[] = {-1,5,10,15,20,25,12};
    int n = 6;


    cout<<"\nprinting Array : ";
    print(arr);

    buildHeap(arr, n);    


    cout<<"\nprinting heap : ";
    print(arr);

}