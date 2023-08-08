class Solution
{
    public:
        bool canConstruct(string r, string m)
        {
            int f[26] = { 0 };
            for (auto i: m) f[i - 'a']++;
            for (auto i: r)
                if (f[i - 'a'] == 0) return false;
                else f[i - 'a']--;
            return true;
        }
};