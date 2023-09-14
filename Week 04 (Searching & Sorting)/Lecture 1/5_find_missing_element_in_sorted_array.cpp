#include<iostream>
using namespace std;


int findMissingElement(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        int diff = arr[mid]-mid;
        if(diff == 1){
            // right me chle jao
            start = mid+1;
        }
        if(diff == 2){
            // ans ko store kra lo
            ans = mid;
            // aur left me chle jao
            end = mid-1;
        }
         
        mid = start +(end-start)/2;
    }

    //HW -> How can we remove this, by modifying the above logic
    if(ans+1 == 0)
        return n+1;

    return ans+1;
    
}


int main(){
  int arr[] = {2,3,4,5,6,7,8,9};
  int n = 8;

  cout<<"Missing element is: " << findMissingElement(arr, n);




return 0;
}