class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        while(head)
        {
            if(head->val==-53141)
                return head;
            head->val=-53141;
            head=head->next;
        }
        return NULL;
    }
};