#include<iostream>
using namespace std;
// MAX heap


class Heap{
  public: 
    int *arr;
    int heapCapacity;       // total
    int currSize;           // current no. of element in Heap / last element ka index

    Heap(int heapCapacity){
        this->arr = new int(heapCapacity);
        this->heapCapacity = heapCapacity;
        this->currSize = 0;
    }


    // Insertion in Heap
    void insert(int data){
        if(heapCapacity == currSize){
            cout<<"Overflow"<<endl;
        }

        // insert data at the vacant/available postion   --> arr ke end me
        currSize++;
        int index = currSize;
        arr[index] = data;

        // take the value to its correct position --> parent se check kro
        while(index > 1){
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex]){
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else{
                break;
            }
        }


    }


    // deletion from Heap  --> top se delete krnge
    void deleteElement(){
        // stpe1: replace root node to last node aur last node ko delete kr do
        int ans = arr[1];
        arr[1] = arr[currSize];
        currSize--;

        // step2: root node ko uski correct position pr le jao (Heapify)
        int index = 1;
        while(index < currSize){
            int leftIndex = 2 * index;
            int rightIndex = 2*index + 1;

            // check kro 3(teeno) me se kon bada h 
            int largestKaIndex = index;
            if(leftIndex <= currSize && arr[leftIndex] > arr[largestKaIndex]){
                largestKaIndex = leftIndex;
            }
            if(rightIndex <= currSize && arr[rightIndex] > arr[largestKaIndex]){
                largestKaIndex = rightIndex;
            }
            
            if(index == largestKaIndex){
                break;
            }
            else{
                swap(arr[largestKaIndex], arr[index]);
                index = largestKaIndex;
            }


        }

        cout<<"\ndeleted : "<<ans;
    }




    // print
    void printHeap(){
        for(int i=1; i<=currSize; i++){      // 1-based indexing h
            cout<<arr[i]<<" ";
        }
    }


};






int main(){
    // Heap creation
    Heap hp(10);

    // insertion
    hp.insert(50);
    hp.insert(30);
    // hp.insert(40);
    hp.insert(20);
    hp.insert(60);
    hp.insert(100);

    cout<<"Printing the content of Heap: ";
    hp.printHeap();


    // deletion
    hp.deleteElement();
    cout<<"\nPrinting the content of Heap: ";
    hp.printHeap();

    hp.deleteElement();
    cout<<"\nPrinting the content of Heap: ";
    hp.printHeap();





    



return 0;
}

