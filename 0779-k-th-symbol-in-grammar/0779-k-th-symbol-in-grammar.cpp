class Solution {
public:
//     very interesting problem by recursion
//     2 imp observations
//     1--> 0
//     2--> 0 1
//     3--> 0 1 1 0 
//     4--> 0 1 1 0 1 0 0 1
        
//     1. har row me double hote jaare
//     2. nth row ka first half (n-1)th row ke barabar h
    
    int kthGrammar(int n, int k) 
    {
        if(n==1 and k==1)
            return 0;
        
        int mid=pow(2,n-1)/2;
        return (k<=mid) ? kthGrammar(n-1,k) : !kthGrammar(n-1,k-mid);
    }
};