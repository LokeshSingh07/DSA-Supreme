class Solution {
public:

    int twoPointerApproach(vector<int> &nums){
        int i = 0;
        int j = 1;
        int n = nums.size();

        while(j < n){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                nums[++i] = nums[j++];
            }
            // else{
            //     i++;
            //     nums[i] = nums[j];
            //     j++;
            // }

        }

        return i+1;
    }

    int removeDuplicates(vector<int>& nums) {
        return  twoPointerApproach(nums);
    }
};