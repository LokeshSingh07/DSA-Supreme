// Floyd triangle
#include<iostream>
using namespace std;


int main(){

    int n=6;
    int num=0;

    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<++num<<" ";
        }
        cout<<endl;
    }





return 0;
}