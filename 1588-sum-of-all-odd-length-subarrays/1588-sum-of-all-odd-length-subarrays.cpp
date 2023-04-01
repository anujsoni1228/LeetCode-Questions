class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> p;
        int s=0,ans=0;
        p.push_back(s);
        for(auto i:arr)
            s+=i,p.push_back(s);
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i;j<arr.size();j+=2)
            {
                if((j-i+1)%2)
                    ans+=p[j+1]-p[i];
            }
        }
        return ans;
    }
};