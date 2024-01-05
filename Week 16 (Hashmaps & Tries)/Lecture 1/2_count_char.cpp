#include<iostream>
#include<unordered_map>
using namespace std;



void storeInMap(unordered_map<char, int> &mp, string &str){
    for(int i=0; i<str.length(); i++){
        mp[str[i]]++;
    }
}



int main(){
    string str = "lokeshsingh";
    unordered_map<char, int> mp;

    // map me entry create kr di h
    storeInMap(mp, str);

    // iterate
    for(auto it: mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }




return 0;
}