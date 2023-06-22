class Solution {
public:
    bool isPalindrome(int x) {
       long int sum=0; 
       int f=x;
       while(x>0)
       {
         sum=sum*10+x%10;
         x/=10;
       }
       cout<<sum;
       return f==sum;
    }
};