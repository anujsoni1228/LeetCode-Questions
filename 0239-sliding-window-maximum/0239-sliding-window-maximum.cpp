class Solution {
public:
    // my own approach code using map+pq
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
    
    // actual solution
    
//     Create a Deque, d of capacity K, that stores only useful elements of current window of K elements. An element is useful if it is in current window and is greater than all other elements on right side of it in current window. Process all array elements one by one and maintain d to contain useful elements of current window and these useful elements are maintained in sorted order. The element at front of the d is the largest and element at rear/back of d is the smallest of current window.
        
// Follow the given steps to solve the problem:

// Create a deque to store K elements.
    
// Run a loop and insert the first K elements in the deque. Before inserting the element, check if the element at the back of the queue is smaller than the current element, if it is so remove the element from the back of the deque until all elements left in the deque are greater than the current element. Then insert the current element, at the back of the deque.
    
// Now, run a loop from K to the end of the array.
    
// Print the front element of the deque.
    
// Remove the element from the front of the queue if they are out of the current window
    
// Insert the next element in the deque. Before inserting the element, check if the element at the back of the queue is smaller than the current element, if it is so remove the element from the back of the deque until all elements left in the deque are greater than the current element. Then insert the current element, at the back of the deque.
    
// Print the maximum element of the last window.

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