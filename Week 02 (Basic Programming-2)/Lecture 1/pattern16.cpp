//  Fancy pattern 1
#include<iostream>
using namespace std;


int main(){

    int n=5;

    for(int row=0; row<n; row++){
        // stars
        for(int col=0; col<2*n-row-2; col++){
            cout<<"*";
        }

        // fancy pattern 
        for(int col=0; col<row+1 ; col++){
            if(col==row){
                cout<<row+1;
            }
            else{
                cout<<row+1<<"*";
            }
        }

        // stars
        for(int col=0; col<2*n-row-2 ; col++){
            cout<<"*";
        }

        cout<<endl;
    }







return 0;
}