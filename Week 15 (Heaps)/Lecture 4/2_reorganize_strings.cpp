// 767. Reorganize String

class Info{
  public:
    char data;
    int count;

    Info(char data, int count){
        this->data = data;
        this->count = count;
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
    string reorganizeString(string s) {
        // step1: count freq of all character in freq table 
        int freq[26] = {0};

        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            freq[ch - 'a']++;
        }        

        // step2: max heap me saare char ko push krna h
        priority_queue<Info*, vector<Info*>, compare> pq;

        for(int i=0; i<26; i++){
            if(freq[i] > 0){
                Info* temp = new Info(i+'a' , freq[i]);
                pq.push(temp);
            }
        }

        string ans = "";

        while(pq.size() >= 2){
            Info* first = pq.top();
            pq.pop();
            Info* second = pq.top();
            pq.pop();


            ans.push_back(first->data);
            first->count--;
            ans.push_back(second->data);
            second->count--;


            // push
            if(first->count > 0){
                pq.push(first);
            }
            if(second->count > 0){
                pq.push(second);
            }
        }



        // single element baccha hua h, alag se handle kro
        while(pq.size() == 1){
            Info* first = pq.top();
            pq.pop();

            ans.push_back(first->data);
            first->count--;

            if(first->count != 0){
                // answer not possible
                return "";
            }
        }
        
        return ans;



    }
};