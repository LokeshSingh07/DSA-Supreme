#include<iostream>
using namespace std;


void rowWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout<<"row wise sum is : "<<sum<<endl;
    }
}
void colWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum += arr[j][i];
        }
        cout<<"col wise sum is : "<<sum<<endl;
    }
}
void diagonalWiseSum(int arr[][4], int row, int col){
    int sum = 0 ;
    for(int i=0; i<row; i++){
        sum += arr[i][i];
    }
    cout<<"diagonal wise sum is : "<<sum<<endl;
}





int main(){


    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {10,11,12,13},
        {15,16,17,18},
    };

    int row = 4;
    int col = 4;
    rowWiseSum(arr, row, col);
    cout<<endl;
    colWiseSum(arr, row, col);
    cout<<endl;
    diagonalWiseSum(arr, row, col);



return 0;
}