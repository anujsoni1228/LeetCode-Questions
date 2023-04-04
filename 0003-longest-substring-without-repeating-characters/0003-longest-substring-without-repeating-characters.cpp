class Solution {
public:
// jab tak non repetaing character mil rahe he lete jao
// if currrent chracter not already existing in set
// the take it because it is not repeating and it is unique

// jese hi repeat hone wala character mila to piche se nikalne shuru kro jab tak vo wala character nhi nikal jata jo repeat ho rha tha 

    int lengthOfLongestSubstring(string str) {
        int mx = 0;
        unordered_set<int> s;
        int n=str.length();
        int i=0,j=0;

        // sliding window approach
        while(j<n)
        {
            // if current char is non repeating
            // take it and increase our size
            if(s.count(str[j])==0)
            {
                s.insert(str[j]);
                j++;
            }
            // if it is repeating then start deleting 
            // chars from staring of sliding window
            else
            {
                s.erase(str[i]);
                i++;
            }
            mx=max(mx,(int)s.size());
        }
    
        return mx;
    }
};