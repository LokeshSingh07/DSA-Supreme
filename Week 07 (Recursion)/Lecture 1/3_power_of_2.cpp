#include<iostream>
using namespace std;


int pow(int n){
    // base case
    if(n==0){
        return 1;
    }

    // recursion
    int ans = 2 * pow(n-1);
    return ans;
}



int main(){

    cout<<pow(5);


return 0;
}