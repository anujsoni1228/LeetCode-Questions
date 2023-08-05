class Solution
{
    public:

        string reverseVowels(string s)
        {
            array<bool, 128> arr = { false
            };	// Initialize all elements to false

           	// Set vowel characters to true (both lowercase and uppercase)
            arr['a'] = true;
            arr['e'] = true;
            arr['i'] = true;
            arr['o'] = true;
            arr['u'] = true;
            arr['A'] = true;
            arr['E'] = true;
            arr['I'] = true;
            arr['O'] = true;
            arr['U'] = true;
            int left = 0, right = s.size() - 1;
            while (left < right)
            {
                while (left < s.size() and!arr[s[left]]) left++;
                while (right >= 0 and!arr[s[right]]) right--;
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