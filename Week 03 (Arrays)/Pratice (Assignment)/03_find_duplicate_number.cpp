class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};







class Solution {
public:

    int negativeMarking(vector<int> &nums){
        int ans = -1;

        for(int i=0; i<nums.size(); i++){
            int index = abs(nums[i]);

            // already viseted h
            if(nums[index] < 0){
                ans = index;
                break;
            }

            // visited mark kr do
            nums[index] *= -1;
        }

        return ans;
    }


    int findDuplicate(vector<int>& nums) {
        return negativeMarking(nums);
    }
};







class Solution {
public:

    int placeToCorrectPostion(vector<int> &nums){
        while(nums[0] != nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }

        return nums[0];
    }

    int findDuplicate(vector<int>& nums) {
        return placeToCorrectPostion(nums);
    }
};