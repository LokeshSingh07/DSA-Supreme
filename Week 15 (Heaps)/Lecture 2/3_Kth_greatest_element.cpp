// 215. Kth Largest Element in an Array
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // step1: Min heap me first k element ko daal do 
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i=0; i<k; i++){
            int element = nums[i];
            pq.push(element);
        }


        // step2: remaining element ko tabhi daalna h jab vo topNode se bade h
        for(int i=k; i<nums.size(); i++){
            int element = nums[i];
            if(element > pq.top()){
                pq.pop();
                pq.push(element);
            }
        }


        return pq.top();
    }
};