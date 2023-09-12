#include<iostream>
using namespace std;


bool searchingInMatrix(int arr[][4], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}





int main(){


    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {10,11,12,13}
    };

    int row = 3;
    int col = 4;
    int key = 12;
    int ans = searchingInMatrix(arr, row, col, key);

    if(ans){
        cout<<"Target is present in matrix"<<endl;
    }
    else{
        cout<<"Target is not present in matrix"<<endl;
    }


return 0;
}