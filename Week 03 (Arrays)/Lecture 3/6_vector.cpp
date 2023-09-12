#include<iostream>
#include<vector>
using namespace std;



int main(){

    vector<int> arr;
    vector<int> vec(5);
    vector<int> v(5, 111);


    // insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"size: "<<v.size()<<endl;
    cout<<"empty: "<<v.empty()<<endl;



    // printing vector
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }




    // 2D Array
    vector<vector<int>> arr2(5, vector<int>(10,-1));

    // printing
    cout<<"\n\nprinting 2D Array : "<<endl;
    for(int i=0; i<arr2.size(); i++){
        for(int j=0; j<arr2[i].size(); j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }







    // HW  --> Jagged array
    vector<vector<int>> brr;

    vector<int> vect1(9,1);
    vector<int> vect2(5,0);
    vector<int> vect3(11,1);
    vector<int> vect4(7,0);
    vector<int> vect5(10,1);

    brr.push_back(vect1);
    brr.push_back(vect2);
    brr.push_back(vect3);
    brr.push_back(vect4);
    brr.push_back(vect5);

    // printing an jagged array
    cout<<"\n\nPrinting jagged array : "<<endl;
    for(int i=0; i<brr.size(); i++){
        for(int j=0; j<brr[i].size(); j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }





return 0;
}