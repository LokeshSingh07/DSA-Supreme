#include<iostream>
using namespace std;


void solve(int& a){
    a++;
    cout<<"Inside solve fun : "<<a<<endl;
}

int main(){
    int a=5;
    solve(a);
    cout<<"Inside main fun : "<<a<<endl;

    return 0;
}