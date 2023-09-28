#include<iostream>
#include<string.h>
using namespace std;


bool checkPalindrome(char ch[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(ch[s] == ch[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    
    return true;
}


int main(){
    char ch[100];
    int size = 5;
    cout<<"Enter the string : ";
    cin.getline(ch,100);    // i/p-> MADAM

    bool isPalindrome = checkPalindrome(ch, size);
    if(isPalindrome == true){
        cout<<"Valid palindrome"<<endl;
    }
    else{
        cout<<"Not a valid Palindrome"<<endl;
    }

return 0;
}