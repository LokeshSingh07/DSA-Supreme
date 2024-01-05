#include<iostream>
#include<unordered_map>
using namespace std;



int main(){
    // creation 
    unordered_map<string, int> mapping;

    unordered_map<int, string> mp = {
        {1, "hello"},
        {2, "jii"},
        {3, "kya haal chaal"}
    };



    // Pair creation of <string, int> type
    pair<string, int> p = make_pair("love", 25);
    pair<string, int> q("lokesh", 21);

    pair<string, int> r;
    r.first = "singh";
    r.second = 21;


    // insertion in map
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    mapping["sundari"] = 21;

    // size
    cout<<"Size of map : "<<mapping.size()<<endl;


    // access
    cout<<"access : "<<mapping.at("love")<<endl;
    cout<<"access : "<<mapping["love"]<<endl;


    // searching
    cout<<"Searching : "<<mapping.count("lokes")<<endl;


    // 1 2 3 4 
    if(mapping.find("lokesh") != mapping.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }



    // catch
    cout<<"size of map : "<<mapping.size()<<endl;
    cout<<mapping["kumar"]<<endl;       // map ke andar entry nhi padi h, to entry create ho jayegi
    cout<<"size of map: "<<mapping.size()<<endl;





    // iterator
    cout<<endl<<endl;;
    for(auto it: mapping){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    
    cout<<endl;
    for(auto it: mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }



return 0;
}


