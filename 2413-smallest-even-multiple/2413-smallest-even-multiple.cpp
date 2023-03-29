class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0)
            return n;
         if(n==1)
             return 2;
        for(int i=n;;i++)
            if(i%2==0 and i%n==0)
                return i;
        return 0;
    }
};