#include<iostream>
using namespace std;



void shiftNegativeOneSide(int arr[], int n){
    int j = 0;
    
    for(int index=0; index<n; index++){
        if(arr[index]<0){
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[7] = {10,-31,62,-23,-54,34,-87};
    int n = 7;

    shiftNegativeOneSide(arr, n);



    // printing
    cout<<"Printing an Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


return 0;
}