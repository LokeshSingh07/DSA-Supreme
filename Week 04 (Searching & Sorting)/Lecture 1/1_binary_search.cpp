#include<iostream>
using namespace std;


int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            // right me jao
            start = mid+1;
        }
        else{
            // left me jao
            end = mid-1;
        }

        // mid update catch --> remember
        mid = start + (end-start)/2;
    }

    // agar yaha tak pahuche h iska mtlb elemtn nhi mila h
    return -1;
}


int main(){
    int arr[] = {10,12,23,33,46,52,76,88,92,99};
    int n = 10;
    int target = 92;

    int ans = binarySearch(arr, n, target);

    cout<<"Answer is : "<<ans<<endl;

return 0;
}