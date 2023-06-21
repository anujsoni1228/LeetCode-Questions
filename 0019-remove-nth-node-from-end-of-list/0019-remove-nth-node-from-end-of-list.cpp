/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
//     ListNode* removeNthFromEnd1(ListNode* head, int n) 
//     {
//         int c=0;
//         ListNode* temp=head;
//         if(head->next==NULL && n==1)
//             return nullptr;
        
//         while(temp)
//         {
//             c++;
//             temp=temp->next;
//         }
        
//         if(c==n)
//             return head->next;
        
//         c-=(n+1);
        
//         temp=head;
//         while(c--)
//             temp=temp->next;
        
//         temp->next=temp->next->next;
//         return head;
//     }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int c=0;
        bool flag=0;
        ListNode *temp=head,*prev=NULL;
        while(temp->next)
        {
           if(flag)
               prev=prev->next;
            
           temp=temp->next;
           c++;
            
           if(c==n)
               prev=head,flag=1;           
        }
        if(c==0)
            return NULL;
        if(c==n-1)
            return head->next;
        
        prev->next=prev->next->next;
        return head;
    }
};