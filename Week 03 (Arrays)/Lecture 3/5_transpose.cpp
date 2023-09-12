#include<iostream>
using namespace std;


void transpose(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void printArray(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}





int main(){

    int arr[3][3] = {
        {1,2,3},
        {5,6,7},
        {10,11,12}
    };

    int row = 3;
    int col = 3;
    
    cout<<"\nPrinting an array before transpose : "<<endl;
    printArray(arr, row, col);

    transpose(arr, row, col);
    
    cout<<"\nPrinting an array after transpose : "<<endl;
    printArray(arr, row, col);




return 0;
}