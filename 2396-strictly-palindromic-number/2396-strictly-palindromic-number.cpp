class Solution {
public:
    bool isStrictlyPalindromic(int N) {
        for(int i=2;i<=N-2;i++)
        {
            int n=N;
            string x,y;
            while(n){
                x.push_back(n%i);
                n/=i;
            }
            y=x;
            reverse(x.begin(),x.end());
            cout<<x<<" "<<y<<endl;   
            if(x!=y)return 0;
        }
        return 1;
    }
};