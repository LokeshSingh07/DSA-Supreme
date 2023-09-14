#include<iostream>
using namespace std;


int findFirstOccurrence(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(target == arr[mid]){
            // ans ko store kra lo
            ans = mid;
            // aur left me chle jao
            end = mid-1;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        // update mid --> catch
        mid = start + (end-start)/2;
    }

    return ans;
}


int main(){
    int arr[] = {10,12,55,55,55,55,76,88,92,99};
    int n = 10;
    int target = 55;

    int ans = findFirstOccurrence(arr, n, target);

    cout<<"Answer is : "<<ans<<endl;



return 0;
}