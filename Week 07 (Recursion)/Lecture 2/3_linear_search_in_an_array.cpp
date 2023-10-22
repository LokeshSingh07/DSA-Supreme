#include<iostream>
using namespace std;


bool linearSearch(int arr[], int size, int index, int target){
    // base case --> out of bound
    if(index >= size){
        return false;
    }

    // agar target mil gaya to return true
    if(target == arr[index]){
        return true;
    }

    bool ans = linearSearch(arr, size, index+1, target);
    return ans;
}   



int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    int index = 0;
    int target = 40;

    int res = linearSearch(arr, size, index, target);

    if(res){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }

return 0;
}