// Flipped solid diamond
#include<iostream>
using namespace std;


int main(){

    int num=10;
    int n=num/2;


    for(int row=0; row<n; row=row+1){
        // stars
        for(int col=0; col<n-row; col=col+1){
            cout<<"*";
        }

        // spaces
        for(int col=0; col<2*row+1; col=col+1){
            cout<<" ";
        }

        // stars
        for(int col=0; col<n-row; col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }


    for(int row=0; row<n; row=row+1){
        // stars
        for(int col=0; col<row+1; col=col+1){
            cout<<"*";
        }

        // spaces
        for(int col=0; col<2*n-2*row-1 ; col=col+1){
            cout<<" ";
        }

        // stars
        for(int col=0; col<row+1; col=col+1){
            cout<<"*";
        }
        cout<<endl;
    }





return 0;
}