//  Numeric hollow half oyramid
#include<iostream>
using namespace std;


int main(){

    int n=5;

    for(int row=0; row<n; row++){
        for(int col=0;col<row+1; col++){
            if(row==n-1 || col==0 || col==row){
                cout<<col+1;
            }
            else{
                cout<<" ";    
            }
        }
        cout<<endl;
    }





return 0;
}