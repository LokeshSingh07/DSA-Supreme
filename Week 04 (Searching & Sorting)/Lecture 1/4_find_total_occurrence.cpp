#include<iostream>
using namespace std;


int findFirstOccurrence(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(target == arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else if(target > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid-1;
        }

        // mid update -> catch
        mid = start + (end-start)/2;
    }
    return ans;
}
int findLastOccurrence(int arr[], int n, int target){
        int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
        while(start <= end){
        if(target == arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else if(target > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid-1;
        }
        
        // mid update -> catch
        mid = start + (end-start)/2;
    }
    return ans;
}


int findTotalOccurrence(int arr[], int n, int target){
    int firstOcc = findFirstOccurrence(arr, n, target);
    int lastOcc = findLastOccurrence(arr, n, target);
    int total = lastOcc - firstOcc +1 ;
    return total;
}

int main(){
    int arr[] = {10,12,32,47,55,55,55,55,55,58,67,88};
    int n = 12;
    int target = 55;

    int totalOccurence = findTotalOccurrence(arr, n, target);;

    cout<<"Answer is : "<<totalOccurence<<endl;



return 0;
}