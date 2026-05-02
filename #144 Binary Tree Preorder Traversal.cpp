class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        answer(root,ans);
        return ans;
    }
    void answer(TreeNode* root,vector<int> &ans){
        if(root==NULL)
            return;
        ans.push_back(root->val);
        answer(root->left,ans);
        answer(root->right,ans);
        
    }
};
