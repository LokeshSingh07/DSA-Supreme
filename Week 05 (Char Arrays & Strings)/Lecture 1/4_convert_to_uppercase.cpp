#include<iostream>
#include<string.h>
using namespace std;


int convertToUppercase(char ch[], int n){
    int index = 0;

    while(ch[index] != '\0'){
        char currCharacter = ch[index];
        // check if lowercase, then convert to uppercase
        if(currCharacter >= 'a' && currCharacter <= 'z'){
            ch[index] = currCharacter - 'a' + 'A';
        }
        index++;
    }
    
}


int main(){
    char ch[100];
    int size = 6;
    cin.getline(ch,100);

    cout<<"Before : "<<ch<<endl;
    convertToUppercase(ch, size);
    cout<<"After  : "<<ch<<endl;


return 0;
}