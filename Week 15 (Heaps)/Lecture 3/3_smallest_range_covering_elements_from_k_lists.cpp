class Info{
  public:
    int data;
    int row;
    int col;

    Info(int a, int b, int c){
        this->data = a;
        this->row = b;
        this->col = c;
    }
};
class compare{
  public:
    bool operator()(Info* a, Info* b){
        return a->data > b->data;
    }
};


class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<Info*, vector<Info*>, compare> pq;

        int maxi = INT_MIN;
        int mini = INT_MAX;
        // first k element ko process kro
        for(int i=0; i<nums.size(); i++){
            int element = nums[i][0];
            Info* temp = new Info(element, i, 0);
            pq.push(temp);
            maxi = max(maxi, element);
        }

        // first k element ke liye answer create ho gaya h
        Info* node = pq.top();
        int ansStart = node->data;
        int ansEnd = maxi;


        // then process remaining element of array
        while(!pq.empty()){
            Info* topNode = pq.top();
            pq.pop();

            int topRow = topNode->row;
            int topCol = topNode->col;

            // insertion wala step
            if(topCol+1 < nums[topRow].size()){
                int element = nums[topRow][topCol+1];
                maxi = max(maxi, element);      //catch
                Info* newNode = new Info(element, topRow, topCol+1);
                pq.push(newNode);
            }else{
                // aage kio element nhi h push krne ko
                break;
            }


            // update answer 
            Info* node = pq.top();
            mini = node->data;
            if((maxi - mini) < ansEnd-ansStart){
                ansStart = mini;
                ansEnd = maxi;
            }

        }

        vector<int> ans;
        ans.push_back(ansStart);
        ans.push_back(ansEnd);
        return ans;
    }
};