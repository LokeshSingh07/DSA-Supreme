class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col =matrix[0].size();
        int n = row*col;
        int start = 0;
        int end = n-1;
        int mid = start+(end-start)/2;

        while(start <= end){
            int rowIndex = mid/col;
            int colIndex = mid%col;
            int currNum = matrix[rowIndex][colIndex];

            if(currNum == target){
                return 1;
            }
            else if(currNum < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }

            // mid ko update kro
            mid = start+(end-start)/2;
        }

        return 0;
    }
};