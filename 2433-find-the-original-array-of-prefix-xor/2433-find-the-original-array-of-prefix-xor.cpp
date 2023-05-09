class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        vector<int> ans(p.size());
        ans[0]=p[0];
        for(int i=1;i<p.size();i++)
            ans[i]=p[i]^p[i-1];
        return ans;            
    }
    
//     let the array be a,b,c,d,e
//     a         =p[0]
//     a^b       =p[1]
//     a^b^c     =p[2]
//     a^b^c^d   =p[3]
//     a^b^c^d^e =p[4]
        
//     a=p[0]
//     b=p[1]^p[0]
//     c=p[2]^p[1]
//     and so on...
};