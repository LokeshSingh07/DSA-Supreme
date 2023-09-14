#include<iostream>
using namespace std;


int findLastOccurrence(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(target == arr[mid]){
            // ans ko store kra lo
            ans = mid;
            // aur right me chel jao
            start = mid+1;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        // mid ko update kr do
        mid = start + (end-start)/2;
    }

    return ans;
}


int main(){
    int arr[] = {10,12,25,43,47,55,55,55,92};
    int n = 9;
    int target = 55;

    int ans = findLastOccurrence(arr, n, target);

    cout<<"Answer is : "<<ans<<endl;



return 0;
}