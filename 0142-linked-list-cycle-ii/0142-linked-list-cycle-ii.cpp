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
    
    
//     We have discussed Floyd’s loop detection algorithm. Below are steps to find the first node of the loop.
// 1. If a loop is found, initialize a slow pointer to head, let fast pointer be at its position. 
// 2. Move both slow and fast pointers one node at a time. 
// 3. The point at which they meet is the start of the loop.

// We can conclude below from the above diagram 

// Distance traveled by fast pointer = 2 * (Distance traveled 
//                                          by slow pointer)

// (m + n*x + k) = 2*(m + n*y + k)

// Note that before meeting the point shown above, fast
// was moving at twice speed.

// x -->  Number of complete cyclic rounds made by 
//        fast pointer before they meet first time

// y -->  Number of complete cyclic rounds made by 
//        slow pointer before they meet first time
// From the above equation, we can conclude below 

//     m + k = (x-2y)*n

// Which means m+k is a multiple of n.
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