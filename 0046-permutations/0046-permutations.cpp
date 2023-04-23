class Solution {
public:
    // RECURSIVE SOLUTION BANAYA HE KHUDSE
    // solve name ka recursive function banaya he
    void solve(vector<int>& nums,vector<bool> arr,vector<vector<int>>& ans,vector<int> a,int n)
    {
        if(a.size()==n)   // agar ek ek kar ke akhri me
        {                 // sare elements push ho gye to
            ans.push_back(a);// last me array ki size total size 
            return;       // ke barabar ho jayega hence 
                         // we count it as our answer
        }         
                          
                          

        for(int i=0;i<n;i++)       // sare cases
        {                          // ko consider krenge
            if(arr[i])             // but sirf usi ko jo 
            {                      // available hai
                vector<int> newA(a);
                newA.push_back(nums[i]);   // temporarily update krne k 
                vector<bool> newArr(arr);  // liye mene alag se vector
                newArr[i]=0;              // banaye he taki agle recursion
                solve(nums,newArr,ans,newA,n); // ko pass kr sku...
            }
        }
     }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<bool> arr(nums.size(),1);
        vector<vector<int>> ans;
        vector<int> a;
        solve(nums,arr,ans,a,nums.size());
        return ans;
    }
};