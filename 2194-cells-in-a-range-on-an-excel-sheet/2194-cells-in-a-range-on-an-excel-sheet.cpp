class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        string x;
        for(char i=s[0];i<=s[3];i++)
            for(char j=s[1];j<=s[4];j++)
                x=i,x+=j,ans.push_back(x);
        return ans;
    }
};