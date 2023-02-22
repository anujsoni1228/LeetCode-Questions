class Solution {
public:
    // run a loop 32 times
    // extract the i'th bit of n starting from last
    // make ans variable and initialize it to 0
    // if extracted bit is  then toggle the ans's bit to  using XOR
    
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t ans=0;
        for(int i=0;i<32;i++)
            if(n&(1<<i))
                ans^=(1<<(31-i));            
        return ans;
    }
};