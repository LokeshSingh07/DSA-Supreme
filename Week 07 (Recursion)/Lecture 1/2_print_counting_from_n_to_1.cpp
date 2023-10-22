#include<iostream>
using namespace std;


void printCounting(int n){
    // base case    
    if(n==1){
        cout<<1;
        return;
    }

    // processing
    cout<<n<<" ";

    // recursion
    printCounting(n-1);
}



int main(){

    printCounting(11);


return 0;
}