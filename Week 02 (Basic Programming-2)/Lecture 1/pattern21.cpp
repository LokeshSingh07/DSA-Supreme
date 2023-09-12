// Butterfly pattern
#include<iostream>
using namespace std;


int main(){

    int n=5;

    for(int row=0; row<n; row++){
        // stars
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }

        // spaces
        for(int col=0; col<2*n-2*row-2; col++){
            cout<<" ";
        }

        // stars
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }


    for(int row=0; row<n; row++){
        // stars
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }

        // spaces
        for(int col=0; col<2*row ; col++){
            cout<<" ";
        }

        // stars
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }




// n=4  r=0
// 2n-2r-2     ||  6 4 2 0


// n=3  r=1
//  2r        || 0 2 4 6




return 0;
}