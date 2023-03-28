class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int x=0;
        for(auto i:o)
            i[1]=='+'?x++:x--;
        return x;
    }
};