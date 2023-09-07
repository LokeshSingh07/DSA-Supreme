// Numeric palindrome equilateral pyramid 
#include<iostream>
using namespace std;


int main(){

    int n=5;

    for(int row=0; row<n; row++){
        // spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }

        // number
        for(int col=0; col<row+1; col++){
            cout<<col+1;
        }

        // number
        for(int col=row; col>0; col--){
            cout<<col;
        }
        cout<<endl;
    }




    cout<<endl<<endl;




    int k=n;
    for(int row=0; row<n; row++){
        int c=1;
        for(int col=0; col<k; col++){
            if(col<n-row-1){
                cout<<" ";
            }
            else if(col<=n-1){
                cout<<c;
                c++;
            }
            else if(col==n){
                c=c-2;
                cout<<c;
                c--; 
            }
            else{
                cout<<c;
                c--;
            }
        }
        k++;
        cout<<endl;
    }




return 0;
}