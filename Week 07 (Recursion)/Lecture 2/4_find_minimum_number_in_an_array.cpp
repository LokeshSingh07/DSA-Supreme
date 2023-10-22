#include<iostream>
#include<limits.h>
using namespace std;


void findMin(int arr[], int size, int index, int &mini){
    // base case --> out of bound
    if(index >= size){
        return;
    }

    // Processing
    mini = min(mini, arr[index]);

    // Recursive call
    findMin(arr, size, index+1, mini);
}   



int main(){
    int arr[] = {40,13,44,6,2};
    int size = sizeof(arr)/sizeof(int);
    int index = 0;
    int mini = INT_MAX;

    findMin(arr, size, index, mini);

    cout<<"Minimum number : "<<mini<<endl;

return 0;
}