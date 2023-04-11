class Solution {
public:
    int getDecimalValue(ListNode* h) {
        int s=0;
        while(h)
            s=s*2+h->val,h=h->next;
        return s;
    }
};