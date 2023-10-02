#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v){
    int m = v.size();
    int n = v[0].size();

    for(int col=0; col<n; col++){
        // even no. of col -> Top to bottom
        if((col & 1) == 0){
            for(int row=0; row<m; row++){
                cout<<v[row][col]<<" ";
            }
        }
        else{
            // odd no of col -> Bottom to Top
            for(int row=m-1; row>=0; row--){
                cout<<v[row][col]<<" ";
            }
        }
    }
}


int main(){
    vector<vector<int>> v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    wavePrintMatrix(v);

}