//  Numeric hollow inverted half pyramid
#include<iostream>
using namespace std;


int main(){

    int n=5;

    for(int row=0; row<n; row++){
        for(int col=row+1; col<=n; col++){
            if(row==0 || col==row+1 || col==n){
                cout<<col;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }




return 0;
}