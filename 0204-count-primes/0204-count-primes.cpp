class Solution {
public:
    // sieve of eratosthenes
    
    int countPrimes(int n) 
    {
        if(n==0||n==1)
            return 0;
        
        vector<bool> arr(n+1);
        int c=n-2;
        for(int i=2;i*i<n;i++)
        {
            if(arr[i]==0)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    if(arr[j]==0)
                    arr[j]=1,c--;
                }
            }
        }
        return c;
    }
};