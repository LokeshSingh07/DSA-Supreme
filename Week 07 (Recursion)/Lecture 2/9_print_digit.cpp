#include<iostream>
#include<vector>
using namespace std;


void printDigit(int num, vector<int> &ans){
    // base case
    if(num == 0){
        return;
    }

    // processing
    int digit = num % 10;
    num /= 10;

    // Recursive call
    printDigit(num, ans);
    
    ans.push_back(digit);
}



int main(){
    int num = 42513;
    vector<int> ans;

    printDigit(num, ans);

    for(int it: ans){
        cout<<it<<" ";
    }

return 0;
}