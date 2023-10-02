class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	
	
	bool twoSum(int arr[], int n, int target){
	    int low = 0;
	    int high = n-1;
	    
	    while(low < high){
	        int csum = arr[low] + arr[high];
	        if(csum == target){
	            return true;
	        }
	        else if(target > csum){
	            low++;
	        }
	        else if(target < csum){
	            high--;
	        }
	    }
	    
	    return false;
	}
	
	
	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    //  array ko phle sort kr do
	    sort(arr, arr+n);
	    
	   // then use two pointer approach for finding target sum
	    return twoSum(arr, n, x);
	}
};