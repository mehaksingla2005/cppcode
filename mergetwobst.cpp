
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int>arr1,arr2;
    void inorder(Node *root,bool flag){
        if(!root)return;
        inorder(root->left,flag);
        if(!flag)arr1.push_back(root->data);
        else arr2.push_back(root->data);
        inorder(root->right,flag);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        inorder(root1,0);
        inorder(root2,1);
        vector<int> ans;
        int i=0;
        int j=0;
        while(i<arr1.size()&&j<arr2.size()){
            if(arr1[i]>arr2[j])ans.push_back(arr2[j++]);
            else ans.push_back(arr1[i++]);
        }
        while(i<arr1.size()){
            ans.push_back(arr1[i++]);
        }
        while(j<arr2.size()){
            ans.push_back(arr2[j++]);
        }
        return ans;
    }
};

