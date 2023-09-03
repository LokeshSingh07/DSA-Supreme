//  Fancy pattern 2
#include<iostream>
using namespace std;


int main(){

    int n=5;

    for(int row=0; row<n; row=row+1){
        for(int col=0; col<row+1; col=col+1){
            if(col == row){
                cout<<row+1;
            }
            else{
                cout<<row+1<<"*";
            }
        }
        cout<<endl;
    }

    for(int row=0; row<n; row=row+1){
        for(int col=0; col<n-row-1; col=col+1){
            if(col == n-row-2){
                cout<<n-row-1;
            }
            else{
                cout<<n-row-1<<"*";
            }
        }
        cout<<endl;
    }







return 0;
}