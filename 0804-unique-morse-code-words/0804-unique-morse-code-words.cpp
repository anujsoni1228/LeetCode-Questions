class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& w) {
        string a[26]=
        {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
         };
        unordered_set<string> st;
        for(int i=0;i<w.size();i++)
        {
            string ans;
            for(int j=0;j<w[i].size();j++)
                ans+=a[w[i][j]-'a'];
            st.insert(ans);
        }
        return st.size();
        
    }
};