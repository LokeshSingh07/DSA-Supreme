class Solution {
  public:
    // Function to return the position of the first repeating element.
    
    int bruteForce(int arr[], int n){
        for(int i=0; i<n; i++){
            bool isRepeated = false;
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    isRepeated = true;
                    return i+1;
                }
            }
        }
        return -1;
    }
    
    
    
    int hashing(int arr[], int n){
        // store the count of each element
        unordered_map<int, int> hash;
        for(int i=0; i<n; i++){
            hash[arr[i]]++; 
        }
        
        // iterate over each elements and check its count>2
        for(int i=0; i<n; i++){
            if(hash[arr[i]] > 1){
                return i+1;
            }
        }
        return -1;
    }
    
    
    
    int firstRepeated(int arr[], int n) {
        // return bruteForce(arr, n);
        
        return hashing(arr, n);
        
    }
};