class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(auto i:n)
            ans=max((int)i,ans);
        return ans-'0';
    }
};