// 958. Check Completeness of a Binary Tree  | Check tree is CBT or not
class Solution {
public:

    bool levelOrderTraversal(TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        int nullFound = false;

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();

            if(temp==NULL){
                nullFound = true;
            }else{
                if(nullFound){
                    return false;
                }
                q.push(temp->left);
                q.push(temp->right);
            }
        }

        return true;
    }

    bool isCompleteTree(TreeNode* root) {
        return levelOrderTraversal(root);
    }
};