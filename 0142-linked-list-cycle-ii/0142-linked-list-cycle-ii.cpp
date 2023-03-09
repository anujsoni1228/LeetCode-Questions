class Solution {
public:
    ListNode *detectCycle1(ListNode *head) {
        while(head)
        {
            if(head->val==-53141)
                return head;
            head->val=-53141;
            head=head->next;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> s;
        while(head)
        {
            if(s.find(head)!=s.end())
                return head;
            s.insert(head);
            head=head->next;
        }
        return NULL;
    }
};