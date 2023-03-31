class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        unordered_map<int,int> m;
        for(auto i:e)
        {
            m[i[0]]++;
                if(m[i[0]]>=2)
                    return i[0];
            m[i[1]]++;
                if(m[i[1]]>=2)
                    return i[1];
        }
        return 0;
    }
};