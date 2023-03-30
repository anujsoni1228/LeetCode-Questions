class Solution {
public:
    int numberOfSteps(int n) {
        int c=0;
        while(n)
            n%2?n--:n/=2,c++;
        return c;
    }
};