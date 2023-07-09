class Solution
{
    
    public:
        string addBinary(string a, string b)
        {
            string ans = "";
            int i = a.size() - 1, j = b.size() - 1;
            int c = 0;
            // iterate over the loop until the both condition become false
            while (i >= 0 or j >= 0)
            {
                int sum = c;
                if (i >= 0) sum += a[i--] - '0';
                if (j >= 0) sum += b[j--] - '0';
                ans+=sum % 2 + '0';
                c = sum / 2;
            }
            if (c == 1)
                ans += '1';
            reverse(ans.begin(), ans.end());
            return ans;
        }
};

/**
 iterate over the loop until the both condition become false
        while(i >= 0 || j >= 0){ 
            int sum = carry;  intialise our sum with carry;
            
            Now, we subtract by '0' to convert the numbers from a char type into an int, so we can perform operations on the numbers
            if(i >= 0) sum += a.charAt(i--) - '0';
            if(j >= 0) sum += b.charAt(j--) - '0';
            taking carry;
            carry = sum > 1 ? 1 : 0;  getting carry depend on the quotient we get by dividing sum / 2 that will be our carry. Carry could be either 1 or 0 
			if sum is 0 res is 1 & then carry would be 0;
            if sum is 1 res is 1 & carry would be 0
            if sum is 2 res is 0 & carry would be 1
            if sum is 3 res is 1 & carry would be 1
            res.append(sum % 2);  just moduling the sum so, we can get remainder and add it into our result
        }
        
**/