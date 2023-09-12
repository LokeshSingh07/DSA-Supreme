#include<iostream>
using namespace std;


void printArray(int arr[][4], int row, int col){
    cout<<"\nRow wise print : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void colWisePrint(int arr[][4], int row, int col){
    cout<<"\nCol wise print :"<<endl;
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}





int main(){

    // create a 2D array 
    // int arr[3][3];

    // initialise   --> 2d array me column size specify krna mandatory h
    // int arr[][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {10,11,12,13}
    // }


    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {10,11,12,13}
    };

    int row = 3;
    int col = 4;
    printArray(arr, row, col);
    colWisePrint(arr, row, col);



return 0;
}