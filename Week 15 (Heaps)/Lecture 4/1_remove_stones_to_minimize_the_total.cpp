// 1962. Remove Stones to Minimize the Total

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;

        // step1: push all element of array into max Heap
        for(int i=0; i<piles.size(); ++i){
            int element = piles[i];
            pq.push(element);
        }

        // step2: jab tak K ki value zero nhi ho jati tab tak loop chalayo
        while(k != 0){
            int top = pq.top();
            pq.pop();

            top = top - (top/2);
            pq.push(top);
            k--;
        }

        int sum = 0;
        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            sum += top;
        }

        return sum;
    }
};