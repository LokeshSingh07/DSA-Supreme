#include<iostream>
#include<vector>
using namespace std;


void findSubsequences(string str, string output, int index, vector<string> &ans){
    // base case
    if(index >= str.length()){
        // ans jo hai, vo output string me build ho chuka h --> print krdo
        // cout<<"-> "<<output<<endl;
        ans.push_back(output);
        return;
    }

    char ch = str[index];

    // exclude
    // findSubsequences(str, output, index+1, ans);
    // // incude
    // // output string me ch character ko include krdo
    // output.push_back(ch);
    // findSubsequences(str, output, index+1, ans);



    // phle include fir exclude
    // include
    output.push_back(ch);
    findSubsequences(str, output, index+1, ans);
    // exclude
    output.pop_back();
    findSubsequences(str, output, index+1, ans);


}

   
int main(){
    string str = "abc";
    string output = "";
    int index = 0;
    vector<string> ans;

    findSubsequences(str, output, index, ans);

    for(string s: ans){
        cout<<s<<" ";
    }


return 0; 
}