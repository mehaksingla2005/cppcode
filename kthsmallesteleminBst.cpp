
class Solution {
public:
    void inorder(TreeNode* root, int k,int& cnt,int& kthsmallestelem){
        if(!root || cnt>=k)return;
        inorder(root->left,k,cnt,kthsmallestelem);
        cnt++;
        if(cnt==k){
            kthsmallestelem=root->val;
            return;
        }
        inorder(root->right,k,cnt,kthsmallestelem);
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt=0;
        int kthsmallestelem=0;
        inorder(root,k,cnt,kthsmallestelem);
        return kthsmallestelem;
        
    }
};
