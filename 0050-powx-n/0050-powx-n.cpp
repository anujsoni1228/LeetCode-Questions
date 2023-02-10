class Solution {
public:
//  is question ko pahle Maine linearly solve kiya tha,
//  but usmein TLE aa raha tha FIR Maine ismein 
//  binary exponantiation apply kiya 
//  that is a simple concept


//  xⁿ= xⁿ/² * xⁿ/²  

    double h(double x, long n)
    {
        if(n==0||x==1)
            return 1;
        if(x==0)
            return 0;
        if(n==1)
            return x;

        double ans=h(x,n/2);
        return (n%2==0) ? ans*ans : ans*ans*x;
    }


     double myPow(double x, int n) {
        return (n>=0) ? h(x,n) : 1.0/h(x,abs(n));
     }
};