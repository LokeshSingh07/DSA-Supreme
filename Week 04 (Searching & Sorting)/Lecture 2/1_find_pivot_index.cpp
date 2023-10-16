#include<iostream>
#include<vector>
using namespace std;


int findPivotIndex(vector<int>& nums){
    int n = nums.size(); 
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(start == end){
            return start;
        }
        if(mid+1 < n && nums[mid] > nums[mid+1]){
            return mid;
        }
        else if(mid-1 >= 0 && nums[mid] < nums[mid-1]){
            return mid-1;
        }
        else if(nums[start] > nums[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }

        // update the mid
        mid = start + (end-start)/2;
    }

    return -1;
}



int main(){
    vector<int> nums{12,14,16,2,4,6,8,10};

    int result = findPivotIndex(nums);

    cout<<"Pivot index is  : "<<result<<endl;



}