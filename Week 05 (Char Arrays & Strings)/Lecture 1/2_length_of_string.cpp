#include<iostream>
#include<string.h>
using namespace std;


int findlength(char ch[], int size){
    int index = 0;
    while(ch[index] != '\0'){
        index++;
    }
    return index;



    // int length = 0;
    // for(int i=0; i<size; i++){
    //     if(ch[i] == '\0'){
    //         // ruk jao
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    // return length;
}




int main(){
    char ch[100];

    // cin>>ch;
    cin.getline(ch,100);

    int length = findlength(ch, 100);

    cout<<"Length of string is :  "<<length<<endl;;
    cout<<"Printing length : "<<strlen(ch)<<endl;



    


return 0;
}