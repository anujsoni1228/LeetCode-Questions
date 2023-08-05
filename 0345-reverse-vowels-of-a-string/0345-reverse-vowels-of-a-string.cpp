class Solution
{
    public:
        bool isVowel(char ch)
        {
            return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
        }
    string reverseVowels(string s)
    {
        // if(s.size()==1)
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            while (left<s.size() and !isVowel(s[left])) left++;
            while (right>=0 and !isVowel(s[right])) right--;
            if (left <= right)
            {
                char t = s[left];
                s[left] = s[right];
                s[right] = t;
            }
            left++, right--;
        }
        return s;
    }
};