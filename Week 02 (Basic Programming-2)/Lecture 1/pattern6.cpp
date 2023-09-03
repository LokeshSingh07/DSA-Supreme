// Hollow diamond
#include<iostream>
using namespace std;


int main(){

    int n=5;


    // first half
    for(int row=0; row<n; row=row+1){
        // spaces
        for(int col=0; col<n-row-1; col=col+1){
            cout<<" ";
        }

        // stars
        for(int col=0; col<row+1; col=col+1){
            if(col==0 || col==row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    // second half
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




return 0;
}
