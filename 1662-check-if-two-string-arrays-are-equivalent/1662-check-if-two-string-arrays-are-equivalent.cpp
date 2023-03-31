class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& a, vector<string>& b) {
        string x,y;
        for(auto i:a)x+=i;
        for(auto i:b)y+=i;
        return x==y;
    }
};