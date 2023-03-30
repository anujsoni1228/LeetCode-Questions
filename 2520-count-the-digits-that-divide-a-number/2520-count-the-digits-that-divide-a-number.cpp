class Solution {
public:
    int countDigits(int num) {
        int n=num,c=0;
        while(n)
            c+=(num%(n%10)==0),n/=10;
        return c;
    }
};