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
public:
    int level[100001];
    int height[100001];
    int levelMaxHt[100001];
    int levelSecondMaxHt[100001];
    int findHeight(TreeNode* root,int lev){
        if(!root)return 0;
        level[root->val]=lev;
        height[root->val]=1+max(findHeight(root->left,lev+1),findHeight(root->right,lev+1));
        if(levelMaxHt[lev]<height[root->val]){
            levelSecondMaxHt[lev]=levelMaxHt[lev];
            levelMaxHt[lev]=height[root->val];
        }else if(levelSecondMaxHt[lev]<height[root->val]){
            levelSecondMaxHt[lev]=height[root->val];
        }
        return height[root->val];
    }
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        findHeight(root,0);
        vector<int> result;
        for(int &node:queries){
            int L=level[node];
            int H=(levelMaxHt[L]==height[node])?levelSecondMaxHt[L]:levelMaxHt[L];
            int tempResult=L+H-1;
            result.push_back(tempResult);
        }
        return result;
    }
};
