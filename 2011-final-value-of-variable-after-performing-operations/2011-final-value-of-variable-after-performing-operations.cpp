class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int x=0;
        for(auto i:o)
            x+=i[1]=='+'?1:-1;
        return x;
    }
};