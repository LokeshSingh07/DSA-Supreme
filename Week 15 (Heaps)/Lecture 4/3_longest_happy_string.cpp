// 1405. Longest Happy String

class Info{
  public: 
    char data;
    int count;

    Info(char data, int cnt){
        this->data = data;
        this->count =  cnt;
    }
};

class compare{
  public: 
    bool operator()(Info* a, Info* b){
        return a->count < b->count;
    }
};


class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<Info*, vector<Info*>, compare> pq;

        // step1: a, b, c ko MAXHEAP me push kro
        if(a>0){
            Info* temp = new Info('a', a);
            pq.push(temp);
        }
        if(b>0){
            Info* temp = new Info('b', b);
            pq.push(temp);
        }
        if(c>0){
            Info* temp = new Info('c', c);
            pq.push(temp);
        }


        string ans = "";
        // step2: starting ke do element ko nikalo 
        while(pq.size() >= 2){
            Info* first = pq.top();
            pq.pop();
            Info* second = pq.top();
            pq.pop();

            if(first->count >= 2){
                ans.push_back(first->data);
                ans.push_back(first->data);
                first->count -= 2;
            }
            else{
                ans.push_back(first->data);
                first->count--;
            }

            if(second->count >= 2 && second->count >= first->count){
                // important -> second element ko tabhi string me push_back krnge jab second ka count >= first ke count se bada/ya equal hoga 
                ans.push_back(second->data);
                ans.push_back(second->data);
                second->count -= 2;
            }
            else{
                ans.push_back(second->data);
                second->count--;
            }


            if(first->count > 0){
                pq.push(first);
            }
            if(second->count > 0){
                pq.push(second);
            }

        }



        // ab maxHeap me 1 element
        if(pq.size() == 1){
            Info* first = pq.top();
            pq.pop();

            if(first->count >= 2){
                ans.push_back(first->data);
                ans.push_back(first->data);
                first->count -= 2;
            }
            else{
                ans.push_back(first->data);
                first->count--;
            }
        }

        return ans;

    }
};




// Test case
// a=1,  b=4,  c=5
