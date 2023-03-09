class Solution {
public:
//     O(N) time O(1) Space
//     But it is modifying the linked list
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
    
//     O(N) time O(N) Space
//     But it is Using O(N) Linear space
    ListNode *detectCycle2(ListNode *head) {
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
    
    ListNode *detectCycle(ListNode *head) {
        ListNode *s=head,*f=head;
        while(f && f->next)
        {
            s=s->next;
            f=f->next->next;
            if(s==f)
                break;
        }
        if(f==NULL || f->next==NULL)
            return NULL;
        while(head!=f)
            head=head->next,f=f->next;
        return f;
    }
    
    
    
};