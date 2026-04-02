class Solution {
public:
    int maxDepth(TreeNode* root) {
        return Height(root);
    }
    int Height(TreeNode *p) {
    int l = 0;
    int r = 0;
    if (p == nullptr){
        return 0;
    }
 
    l = Height(p->left);
    r = Height(p->right);
 
    if (l > r){
        return l + 1;
    } else {
        return r + 1;
    }
}
};
