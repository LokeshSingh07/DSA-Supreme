//  
#include<iostream>
using namespace std;


int main(){

    int n=5;
    
    for(int row=0; row<n; row++){
        char ch='A';
        for(int col=0; col<row+1; col++){
            int number = col+1;
            ch = number + 'A' - 1;
            cout<<ch;
        }

        for(char alphabet=ch; alphabet>'A'; ){
            alphabet = alphabet-1;
            cout<<alphabet;
        }
        cout<<endl;
    }

    



return 0;
}