class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans=head,*pre;
        while(head->next)
        {
            if(head->val==0)
            {
                int s=0;
                ListNode* t=head;
                while(t->next and t->next->val!=0)
                    s+=t->next->val,t=t->next;
                head->val=s;
                head->next=t->next;
            }
            pre=head;
            head=head->next;
        }
        pre->next=NULL;        
        return ans;
    }
};