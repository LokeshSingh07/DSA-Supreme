#include<iostream>
#include<limits.h>
using namespace std;


void findMax(int arr[][4], int row, int col){
    int maxNo = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > maxNo){
                maxNo = arr[i][j];
            }
        }
    }
    cout<<"Max element is : "<<maxNo<<endl;
}
void findMin(int arr[][4], int row, int col){
    int minNo = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] < minNo){
                minNo = arr[i][j];
            }
        }
    }
    cout<<"Min element is : "<<minNo<<endl;
}





int main(){


    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {10,11,12,13}
    };

    int row = 3;
    int col = 4;
    findMax(arr, row, col);
    findMin(arr, row, col);




return 0;
}