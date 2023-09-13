class Solution {
public:

    void reverseVector(vector<int>& arr){
        int start = 0;
        int end = arr.size()-1;

        while(start < end){
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    }


    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // transpose
        for(int i=0; i<n; i++){
            for(int j=i; j<matrix[i].size(); j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        // reverse each row of matrix
        for(int i=0; i<n; i++){
            reverseVector(matrix[i]);
        }


    }
};