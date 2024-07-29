    bool isBalanced(TreeNode* root) {
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        if(abs(rh-lh)>1)return false;
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        if(!l || !r)return false;
        return true;}
