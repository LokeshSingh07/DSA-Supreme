#include<iostream>
#include<vector>
using namespace std;


void solve(vector<int>& v, int size, int index, vector<int>& ans){
    // base case
    if(index >= size){
        return;
    }

    // processing
    if(v[index]%2 == 0){
        ans.push_back(v[index]);
    }

    // Recursive call
    solve(v, size, index+1, ans);
}


int main(){
    vector<int> v{43,24,31,62,873,43,43,34,75};
    vector<int> ans;
    int index = 0;
    int size = v.size();

    solve(v, size, index, ans);

    for(auto it: ans){
        cout<<it<<" ";
    }



return 0;
}