#include<iostream>
#include<limits.h>
using namespace std;


void findMax(int arr[], int size, int index, int &maxi){
    // base case --> out of bound
    if(index >= size){
        return;
    }

    // Processing
    maxi = max(maxi, arr[index]);

    // Recursive call
    findMax(arr, size, index+1, maxi);
}   



int main(){
    int arr[] = {40,13,44,6,2};
    int size = sizeof(arr)/sizeof(int);
    int index = 0;
    int maxi = INT_MIN;

    findMax(arr, size, index, maxi);

    cout<<"Maximum number : "<<maxi<<endl;

return 0;
}