class Solution {
public:
   TreeNode* func(ListNode* p, int i, int j){
        if (i > j) return NULL;
        ListNode* q=p;
        int m = (i+j)/2;
       int a=m;
       while(a>0){
           q=q->next;
           a--;
       }
        TreeNode* root = new TreeNode(q->val);

        root->left = func(p,i,m-1);
        root->right = func(p,m+1,j);

        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        int n=0;
        ListNode* p=head;
        while(p){
            n++;
            p=p->next;
        }
        TreeNode* root=func(head,0,n-1);
        return root;
    }

};
