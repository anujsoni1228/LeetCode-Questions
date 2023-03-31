class Solution {
public:
    bool checkIfPangram(string s) {
        if(s.size()<26)
            return 0;
        int a[26]={0};
        for(auto i:s)a[i-'a']=1;
        for(auto i:a)if(i==0)return 0;
        return 1;
    }
};