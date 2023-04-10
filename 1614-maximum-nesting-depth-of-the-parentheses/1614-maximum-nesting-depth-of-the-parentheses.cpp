class Solution {
public:
    int maxDepth(string s) {
        int c=0,ans=0;
        for(auto i:s){
            if(i=='(')c++;
            else if(i==')') c--;
            ans=max(ans,c);
        }
        return ans;
    }
};