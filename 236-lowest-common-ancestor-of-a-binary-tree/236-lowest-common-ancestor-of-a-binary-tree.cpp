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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val==p->val||root->val==q->val){
            return root;
        }
        if(!root->left and !root->right){
            return NULL;
        }
        TreeNode*right=NULL;
        TreeNode*left=NULL;
        if(root->left){
            left=lowestCommonAncestor(root->left,p,q);
        }
        if(root->right){
            right=lowestCommonAncestor(root->right,p,q);
        }
        if(left and right){
            return root;
        }
        if(left==NULL){
            return right;
        }
        else{
            return left;
        }
    }
};