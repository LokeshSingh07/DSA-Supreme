#include<iostream>
using namespace std;



void findAllTriplet(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            for(int k=0; k<size; k++){
                cout<<i<<","<<j<<","<<k<<endl;
            }
        }
    }
}

int main(){
    int arr[] = {1,2,3,4};
    int size = 4;

    findAllTriplet(arr, size);





return 0;
}