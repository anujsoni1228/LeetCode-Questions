class Solution {
public:
    vector<int> maxSlidingWindow1(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<int> pq;
        unordered_map<int,int> m;
        int i=0,j=0;
        while(j<nums.size())
        {
            pq.push(nums[j]);
            m[nums[j]]+=1;
            if(j-i+1==k)
            {
                while(m[pq.top()]==0)pq.pop();
                ans.push_back(pq.top());
                m[nums[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
    
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> d;
        int i=0,j=0;
        while(j<nums.size())
        {
            while(!d.empty() and d.back()<nums[j])d.pop_back();
            d.push_back(nums[j]);
            if(j-i+1==k)
            {
                ans.push_back(d.front());
                if(!d.empty() and d.front()==nums[i])
                    d.pop_front();
                i++;
            }
            j++;
        }        
        return ans;
    }
};