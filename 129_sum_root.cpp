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
    int sum;
    int sumNumbers(TreeNode* root) {
        if(root == NULL)
            return 0;
        DFS(root,0);
        return sum;
    }
private:
    void DFS(TreeNode* p,int val){
        val = val * 10 + p->val;        
        if(p->left != NULL)
            DFS(p->left,val);
        if(p->right != NULL)
            DFS(p->right,val);
        if(p->left == NULL && p->right == NULL)
            sum += val;
    }

};