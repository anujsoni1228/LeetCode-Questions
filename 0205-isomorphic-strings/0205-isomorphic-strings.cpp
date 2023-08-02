class Solution
{
    public:
        bool isIsomorphic(string s, string t)
        {
            if (s.size() != t.size()) return false;
            unordered_map<char, char> m;
            for (int i = 0; i < s.size(); i++)
            {
                if (m.find(s[i]) == m.end())
                {
                    m[s[i]] = t[i];
                }
                else
                {
                    if (m[s[i]] == t[i])
                        continue;
                    else return false;
                }
            }
             unordered_map<char, char> m2;
            for (int i = 0; i < s.size(); i++)
            {
                if (m2.find(t[i]) == m2.end())
                {
                    m2[t[i]] = s[i];
                }
                else
                {
                    if (m2[t[i]] == s[i])
                        continue;
                    else return false;
                }
            }
            return true;
        }
};