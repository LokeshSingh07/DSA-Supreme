// hollow rectangle

#include<iostream>
using namespace std;



int main(){
    int m=7,n=5;


    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            if(row==0 || row==m-1){
                cout<<"* ";
            }
            else{
                if(col==0 || col==n-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }




return 0;
}
