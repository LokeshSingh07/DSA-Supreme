#include<iostream>
#include<vector>
#include<queue>
using namespace std;



// user defined data-type
class Info{
  public: 
    int data;
    int row;
    int col;

    Info(int d, int r, int c){
        this->data = d;
        this->row = r;
        this->col = c;
    }
};

// custom comparator
class compare{
    public:
    bool operator()(Info* a, Info* b){
        return a->data > b->data;
    }
};




void mergeKSortedArrays(int arr[][4], int k, int n, vector<int> &ans){
    priority_queue<Info*, vector<Info*>, compare> pq;

    // step1: first K element  ko min heap me daal do
    for(int i=0; i<k; i++){
        int element = arr[i][0];
        Info* temp = new Info(element, i, 0);
        pq.push(temp);
    }


    // baaki element ko process kro
    while(!pq.empty()){
        Info* top = pq.top();
        pq.pop();

        // store it into ans vector
        int topData = top->data;
        int topRow  = top->row;
        int topCol = top->col;
        ans.push_back(topData);


        // jis bhi array me se element pop() kiya h 
        // usi array me se next element insert hoga
        if(topCol+1 < n){
            Info* newNode = new Info(arr[topRow][topCol+1], topRow, topCol+1);
            pq.push(newNode);
        }

    }

}



int main(){
    int arr[3][4] = {
        {1, 4, 8, 10},
        {2, 3, 6 ,9},
        {5, 7, 11, 12}
    };
    int k = 3;
    int n = 4;


    vector<int> ans;
    mergeKSortedArrays(arr, k, n, ans);




    cout<<"Printing ans array : ";
    for(auto it : ans){
        cout<<it<<" ";
    }




return 0;
}