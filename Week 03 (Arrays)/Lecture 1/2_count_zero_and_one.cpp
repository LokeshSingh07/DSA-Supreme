#include<iostream>
using namespace std;


void countZeroAndOne(int arr[], int n){
    int zero=0;
    int one=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }

    cout<<"zero : "<<zero<<"  "<<"one : "<<one<<endl;
}


int main(){
    int arr[] = {0,1,0,1,1,0,0};
    int n=7;

    countZeroAndOne(arr, n);



return 0;
}