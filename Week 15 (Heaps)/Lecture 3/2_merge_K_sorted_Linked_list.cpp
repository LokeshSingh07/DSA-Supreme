// 23. Merge k Sorted Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class compare{
  public: 
    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
    }
};


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;

        // step1: process first K element of linked list
        for(int i=0; i<lists.size(); i++){
            ListNode* temp = lists[i];
            if(temp){
                pq.push(temp);
            }
        }


        ListNode* head = NULL;
        ListNode* tail = NULL;

        // baaki element ko process kro
        while(!pq.empty()){
            ListNode* topNode = pq.top();
            pq.pop();


            if(head==NULL){
                // jab first Node store kr rahe h
                head = topNode;
                tail = topNode;
                if(head->next){
                    // agar next element null nhi h to hi push krnege
                    pq.push(head->next);
                }
            }
            else{
                // agar ye node list ka phla element nhi h
                tail->next = topNode;
                tail = topNode;
                if(tail->next){
                    // agar next element null nhi h to hi push krnege
                    pq.push(tail->next);
                }
            }

        }

        return head;

    }
};