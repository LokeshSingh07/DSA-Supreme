// Inverted pyramid
#include<iostream>
using namespace std;



int main(){

    int n=5;

    for(int row=0; row<n; row=row+1){
        // space
        for(int col=0; col<row; col=col+1){
            cout<<" ";
        }

        // stars
        for(int col=0; col<n-row; col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }





return 0;
}