/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int maxpathutil(TreeNode* root,int& res){
        if(root==NULL)return 0;
        int l=maxpathutil(root->left,res);
        int r=maxpathutil(root->right,res);
        int max_ans=max(max(l,r)+root->val,root->val);
        int max_full=max(max_ans,l+r+root->val);
         res=max(res,max_full);
        return max_ans;
    }
public:
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        maxpathutil(root,res);
        return res;
    }
};
