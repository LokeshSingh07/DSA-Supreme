// Method 1: MIN Heap --> TLE
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        // step1: create min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i=0; i<=r; i++){
            int element = arr[i];
            pq.push(element);
        }
        
        
        // step2: (K-1) tak pop kro
        for(int i=0; i<k-1; i++){
            pq.pop();
        }
        
        return pq.top();
    }
};







// Method2: Max heap 
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        int n = r+1;
        
        // step1 : first K element ko heap me daal do
        priority_queue<int> pq;
        for(int i=0; i<k; i++){
            pq.push(arr[i]);
        }
        
        // step2: remaining element to tabhi insert krnge, jab vo top se choote honge
        for(int i=k; i<n; i++){
            int element = arr[i];
            if(element < pq.top()){
                pq.pop();
                pq.push(element);
            }
        }
        
        return pq.top();
        
    }
};