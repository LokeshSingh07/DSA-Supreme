#include<iostream>
using namespace std;


 

int main(){
    // creation
    string name;

    // input
    // cin>>name;
    getline(cin, name);




    cout<<"Length of string : "<<name.length()<<endl;
    cout<<"String is empty or not : "<<name.empty()<<endl;
    cout<<"Character at position 0 is : "<<name.at(0)<<endl;

    cout<<"\nFront character of string is : "<<name.front()<<endl;
    cout<<"last character of string is : "<<name.back()<<endl<<endl;




    // append()
    string str1 = "lokesh ";
    string str2 = "singh";

    cout<<"Before appending : "<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;

    str1.append(str2);
    cout<<"After appending : "<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl<<endl;




    // erase()
    string desc = "This is a car";
    desc.erase(4,3);
    cout<<desc<<endl;




    // insert()
    string name2 = "lokesh singh";
    string middle = "kumar ";

    name2.insert(7, middle);
    cout<<"Printing name : "<<name2<<endl<<endl;




    // push_back() & pop_back()
    string name3 = "Lokesh";

    cout<<name3<<endl;

    name3.push_back('S');
    cout<<name3<<endl;

    name3.pop_back();
    cout<<name3<<endl;




    // find()
    string st1 = "yaar tera super star desi kalakaar";
    string st2 = "stary";

    if(st1.find(st2) == string::npos){
        cout<<"Not found\n";
    }
    else{
        cout<<"Found\n";
    }




    // compare()
    string s1 = "singh";
    string s2 = "singh";

    if(s1.compare(s2) == 0){
        cout<<"Matching\n";
    }
    else{
        cout<<"Not Matching\n";
    }




    // substr() 
    string des = "this is a car, big daady of all suvs";
    cout<<des.substr(19, 5)<<endl;





return 0;
}