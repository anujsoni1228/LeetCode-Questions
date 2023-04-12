class Solution {
public:
    bool checkAlmostEquivalent(string a, string b) {
        unordered_map<int,int> m;
        for(int i=0;i<a.size();i++)
            m[a[i]]++,m[b[i]]--;
        
        cout<<"==================\n";
        for(auto i:m)cout<<(char)i.first<<"-->"<<i.second<<endl;
        for(auto i:m)
            if(abs(i.second)>3)return 0;
        return 1;
    }
};