class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        long long int mid = start+(end-start)/2;
        int ans = -1;

        while(start<=end){
            // kya mid hi toh ans nhi 
            if(mid*mid == x){
                return mid;
            }
            // store ans & right me jao
            if(mid*mid < x){
                ans = mid;
                start = mid+1;
            }
            // left me jao
            else if(mid*mid > x){
                end = mid-1;
            }

            // mid ko update kro
            mid = start+(end-start)/2;
        }

        return ans;

    }
};