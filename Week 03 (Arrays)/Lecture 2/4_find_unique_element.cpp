#include<iostream>
using namespace std;


int uniqueElement(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {11,3,5,11,54,54,5};
    int size = 7;

    int result = uniqueElement(arr, size);
    cout<<result<<endl;

    return 0;
}