class Solution {
public:
    
    // everything same as Next Greater Element I but the only difference is that 
    // we have created an imaginary duplicate copy of the array twice
    // and we are running the loop from 2*n-1 to 0 so that elements to the left
    // are also getting pushed in stack and are getting considered while findind the NGE
    
    // original array
    // [1,2,3,4,3]
    //  0 1 2 3 4 
    
    // copied array
    // [1,2,3,4,3,1,2,3,4,3]
    //  0 1 2 3 4 5 6 7 8 9
    
    // imp observation : 3 ke right side dekhne per humko 3 ka NGE 4 milta he
    // but right side wala copied 3 jo he uske pehle ke element hi considered he
    // kyuki uske bad wale to already consider ho chuke he
    
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans(n);
        stack<int> s;
        for(int i=2*n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i%n])
                s.pop();
            if(s.empty())
                ans[i%n]=-1;
            else
                ans[i%n]=s.top();
            s.push(nums[i%n]);
        }
        return ans;        
    }
};