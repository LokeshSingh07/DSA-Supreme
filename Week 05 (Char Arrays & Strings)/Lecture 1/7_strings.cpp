#include<iostream>
using namespace std;


 

int main(){
    // creation
    string name;

    // input
    cin>>name;
    getline(cin, name);

    // print
    cout<<"printing name :  "<<name<<endl;;
    cout<<"Printing first character : "<<name[0]<<endl;

    // printing using loop
    int index = 0;
    while(name[index]!='\0'){
        cout<<"At index "<<index<<" character : "<<name[index]<<endl;
        index++;
    }

    cout<<"Printing index 6 value : "<<name[6]<<endl;

    int value = (int)name[6];
    cout<<"Printing index 6 value : "<<value<<endl;




return 0;
}