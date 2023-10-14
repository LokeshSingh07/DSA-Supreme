#include<iostream>
using namespace std;


int searchOnNearlySortedArray(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){ 
        if(mid-1 >= 0 && arr[mid-1] == target){        // check out of bound condition
            return mid-1;
        }
        else if(arr[mid] == target){
            return mid;
        }
        else if(mid+1 <n && arr[mid+1] == target){      // check out of bound condition
            return mid+1;
        }
        else if(arr[mid] > target){
            end = mid-2;
        }
        else{
            start = mid+2;
        }

        // mid ko update kro
        mid = start+(end-start)/2;
    }

    return -1;
}


int main(){
    int arr[] = {20,20,30,50,40,70,60};
    int n  = sizeof(arr)/sizeof(int);
    int target = 60;

    int ans = searchOnNearlySortedArray(arr, n, target);
    if(ans != -1){
        cout<<"Element found at index : "<<ans<<endl;
    }
    else{
        cout<<"Element not found in the array"<<endl;
    }



return 0;
}