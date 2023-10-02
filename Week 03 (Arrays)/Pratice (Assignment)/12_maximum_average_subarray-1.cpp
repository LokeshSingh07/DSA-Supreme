class Solution {
public:
    double bruteForce(vector<int>& nums, int k){
        int i = 0;
        int j = k-1;
        int maxSum = INT_MIN;

        while(j < nums.size()){
            int sum = 0;
            for(int y=i; y<=j; y++){
                sum += nums[y];
            }
            maxSum = max(sum, maxSum);
            i++;
            j++;
        }

        double maxAvg = maxSum / (double)k;
        return maxAvg;
    }

    double slidingWindow(vector<int>& nums, int k){
        int i = 0;
        int j = k-1;
        int sum = 0;
        int maxSum = 0;

        // sum of first k elements
        for(int y=i; y<=j; y++){
            sum += nums[y];
        }
        maxSum = sum;
        // j++;

        while(j < nums.size()-1){
            sum -= nums[i++];
            sum += nums[++j];
            maxSum = max(maxSum, sum);
        }

        double maxAvg = maxSum / (double)k;
        return maxAvg;
    }



    double findMaxAverage(vector<int>& nums, int k) {
        // return bruteForce(nums, k);

        return slidingWindow(nums, k);
    }
};