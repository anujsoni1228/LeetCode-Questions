class Solution {
public:
    int minimumSum(int n) 
    {
        int a[4];
        for(int i=0;i<4;i++)
            a[i]=n%10,n/=10;      
        sort(a,a+4);
        return a[0]*10+a[2]+a[1]*10+a[3];
    }
};