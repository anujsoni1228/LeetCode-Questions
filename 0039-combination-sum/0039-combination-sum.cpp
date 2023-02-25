class Solution {
public:
    
// See for every number in making our target sum, we have two possibility i.e

// 1. Whether to include that element in making our target sum.
// 2. Whether not to include that element in making our target sum.
        
// So, if we do not a include a element in our answer then without decreasing target sum, we will move to next index. 
// Why we do not decrese sum? 
//because we will choose not to include in this element in our combination, hence it does not contribute in making our sum.

// But, if we choose a particular element to include in our answer, then we will decrease the target sum but we will not move to next index. 
// Why we will not move to next index?
// because for a specific element we have unlimited number of choice, so it may be possible that specific element again contribute in making our sum.
    
    //  for detailed explaination and image 
    // see pdf i have made
    // link https://leetcode.com/problems/combination-sum/discuss/1777334/C%2B%2BorDetailed-Explanation-w-TREE-DIAGRAMor-RECURSION-%2B-BACKTRACKINGor-EACH-STEP-EXPLAINED
    
    
    
    vector<vector<int>> ans;
    void helper(vector<int>& c, int t,vector<int> bag,int i)
    {
        if(t<0 || i>=c.size()) return;
        if(0==t)  { ans.push_back(bag); return; }       
        helper(c,t,bag,i+1);
        bag.push_back(c[i]);
        helper(c,t-c[i],bag,i);        
    }    
    vector<vector<int>> combinationSum(vector<int>& c, int t) 
    {
        vector<int> bag;
        helper(c,t,bag,0);
        return ans;
    }
};