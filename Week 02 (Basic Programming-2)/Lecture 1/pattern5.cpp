// Inverted hollow pyramid
#include<iostream>
using namespace std;



int main(){

    int n=5;


    for(int row=0; row<n; row=row+1){
        // spaces
        for(int col=0; col<row; col=col+1){
            cout<<" ";
        }

        // stars
        for(int col=0; col<n-row; col=col+1){
            if(col==0 || col==n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;

    }



    cout<<endl;


    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }

        // stars
        for(int col=0; col<2*n-2*row-1; col++){
            if(col==0 || col==2*n-2*row-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }






return 0;
}