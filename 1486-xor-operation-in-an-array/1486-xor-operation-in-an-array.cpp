class Solution {
public:
    int xorOperation(int n, int s) {
        int ans=s;
        n--;
        while(n--)
            ans=(s+2)^ans,s+=2;
        return ans;
    }
};