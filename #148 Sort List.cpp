class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> a;
        ListNode* p=head;
        while(p){
            a.push_back(p->val);
            p=p->next;
        }
        p=head;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            p->val=a[i];
            p=p->next;
        }
        return head;
    }
};
