/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    stack <TreeNode*> q;
    int count = 0,result;
    int kthSmallest(TreeNode* root, int k) {
        DFS(root,k);
        return result;
    }
private:
    void DFS(TreeNode* root,int k){
        if(root->left != NULL)
            DFS(root->left,k);
        count++;
        if(count == k){
            result = root->val;
            return;
        }
        if(root->right != NULL){
            DFS(root->right,k);
        }
    }
};