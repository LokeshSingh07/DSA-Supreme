#include<iostream>
using namespace std;



void sortZeroOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    // count the number of zeroes and ones
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zeroCount++;
        }    
        if(arr[i]==1){
            oneCount++;
        }
    }

    // place all zeroes first
    // int i;
    // for(i=0; i<zeroCount; i++){
    //     arr[i] = 0;
    // }
    // for(int j=i; j<size; j++){
    //     arr[j] = 1;
    // }

    int index = 0;
    while(zeroCount--){
        arr[index] = 0;
        index++;
    }
    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }
    

}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {0,1,0,1,1,0,1,0,1};
    int size = 9;
    
    cout<<"Array before sorting : "<<endl;
    printArray(arr, size);
    
    sortZeroOne(arr, size);

    cout<<"\nArray after sorting : "<<endl;
    printArray(arr, size);





return 0;
}