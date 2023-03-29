class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1,s=0,x;
        while(n)
            x=n%10,s+=x,p*=x,n/=10;
        return p-s; 
    }
};