class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int x=0;
        for(auto i:o)
        {
            if(i[1]=='+')
                x++;
            if(i[1]=='-')
                x--;
        }
        return x;
    }
};