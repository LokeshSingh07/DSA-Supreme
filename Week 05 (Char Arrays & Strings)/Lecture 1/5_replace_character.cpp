#include<iostream>
#include<string.h>
using namespace std;


int replaceCharacter(char ch[], int n){
    int index = 0;

    while(ch[index] != '\0'){
        char currCharacter = ch[index];
        if(currCharacter == '@'){
            ch[index] = ' ';
        }
        index++;
    }
    
}


int main(){
    char ch[100];
    int size = 6;
    cin.getline(ch,100);

    cout<<"Before : "<<ch<<endl;
    replaceCharacter(ch, size);
    cout<<"After  : "<<ch<<endl;


return 0;
}