#include<iostream>
#include<vector>
using namespace std;


void heapify(int* arr, int size, int index){
    int leftIndex = 2*index;
    int rightIndex = 2*index + 1;
        
    // check kro teeno me se bada kon h
    int largestKaIndex = index;
    if(leftIndex <= size && arr[leftIndex] > arr[largestKaIndex]){
        largestKaIndex = leftIndex;
    } 
    if(rightIndex <= size && arr[rightIndex] > arr[largestKaIndex]){
        largestKaIndex = rightIndex;
    }

    // agar current node hi bada h to
    if(index == largestKaIndex){
        return;
    }
    else{
        swap(arr[index], arr[largestKaIndex]);

        // baak recursion smbhal lega
        heapify(arr, size, largestKaIndex);
    }

}

void buildHeap(int *arr, int size){
    for(int index=size/2; index>0; index--){
        // har ek node ko uski correct position pr daal do
        heapify(arr, size, index);
    }
}

void heapSort(int *arr, int size){

    while(size>1){
        swap(arr[1], arr[size]);
        size--;

        // heapify
        heapify(arr, size, 1);
    }
}



// ___________________________________________________________
int main(){
    int arr[] = {-1,34,43,55,7,75,7};
    int size = 6;
        
    cout<<"\n array : ";
    for(int i=1; i<=6; i++){
        cout<<arr[i]<<" ";
    }


    // step1: create an array into a Heap
    buildHeap(arr, size);
    cout<<"\n array : ";
    for(int i=1; i<=6; i++){
        cout<<arr[i]<<" ";
    }



    heapSort(arr, size);
    cout<<"\n array : ";
    for(int i=1; i<=6; i++){
        cout<<arr[i]<<" ";
    }




return -1;
}






// ___________________ Sort an Array LC->912
class Solution {
public:
    void heapify(vector<int>&nums, int size, int index){
        int leftIndex = 2*index + 1;
        int rightIndex = 2*index + 2;
        
        // check kro teeno me se bada kon h
        int largestKaIndex = index;
        if(leftIndex <= size && nums[leftIndex] > nums[largestKaIndex]){
            largestKaIndex = leftIndex;
        } 
        if(rightIndex <= size && nums[rightIndex] > nums[largestKaIndex]){
            largestKaIndex = rightIndex;
        }

        // agar current node hi bada h to
        if(index == largestKaIndex){
            return;
        }
        else{
            swap(nums[index], nums[largestKaIndex]);

            // baak recursion smbhal lega
            heapify(nums, size, largestKaIndex);
        }

    }

    void buildHeap(vector<int> &nums){
        int size = nums.size()-1;
        for(int index=size/2; index>=0; index--){
            // har ek node ko uski correct position pr daal do
            heapify(nums, size, index);
        }
    }

    void heapSort(vector<int> &nums){
        int size = nums.size()-1;

        while(size != -1){
            swap(nums[0], nums[size]);
            size--;

            // heapify
            heapify(nums, size, 0);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        // step1: create an array into a Heap
        buildHeap(nums);

        heapSort(nums);

        return nums;
    }
};