#include<iostream>
#include<queue>
using namespace std;






int main(){

    // MAX Heap
    priority_queue<int> maxPq;

    // insertion
    maxPq.push(10);
    maxPq.push(43);
    maxPq.push(22);
    maxPq.push(76);
    maxPq.push(67);

    cout<<"Top element of Heap : "<<maxPq.top()<<endl;    
    maxPq.pop();
    cout<<"Top element of Heap : "<<maxPq.top()<<endl;
    if(maxPq.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    cout<<"size of heap : "<<maxPq.size()<<endl;




    // ________________________________________________________________________________
    // MIN Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    
    // insertion
    pq.push(43);
    pq.push(54);
    pq.push(20);
    pq.push(23);
    pq.push(11);
    pq.push(9);

    cout<<"Top element of Heap : "<<pq.top()<<endl;
    pq.pop();

    cout<<"Top element of Heap : "<<pq.top()<<endl;
    if(pq.empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }



return 0;
}