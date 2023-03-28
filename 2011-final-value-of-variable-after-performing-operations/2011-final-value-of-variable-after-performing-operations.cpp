class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int x=0;
        for(auto i:o)
        {
            if(i[0]=='+' || i[2]=='+')
                x++;
            if(i[0]=='-' || i[2]=='-' )
                x--;
        }
        return x;
    }
};