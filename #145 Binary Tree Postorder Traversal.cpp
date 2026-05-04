class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        answer(root,ans);
        return ans;
    }
    void answer(TreeNode* root,vector<int> &ans){
        if(root==NULL)
            return;
        answer(root->left,ans);
        answer(root->right,ans);
        ans.push_back(root->val);
    }
};
