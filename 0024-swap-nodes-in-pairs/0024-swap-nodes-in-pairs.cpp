
class Solution {
public:
    ListNode* swapPairs(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *t=head->next->next;
        head->next->next=head;
        ListNode *x=head->next;
        head->next=swapPairs(t);
        return x;        
    }
};