class Solution {
public:
    int sumNumbers(TreeNode* root) {
        vector<int> ans;
        dfs(ans,0,root);
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;
    }
    void dfs(vector<int>& ans,int curr,TreeNode* root){
        if(!root)
            return;
        curr=curr*10+root->val;
        if(!root->left&&!root->right){
            ans.push_back(curr);
            return;
        }
        dfs(ans,curr,root->left);
        dfs(ans,curr,root->right);
    }
};
