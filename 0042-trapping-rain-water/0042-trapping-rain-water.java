class Solution {

    // very simple logic
    // move from left to right store max till now at each point left[i]
    // move from right to left store max till now at each point right[i]
    // at each index i , Water trapped = min(left[i], right[i]) - height[i]
    // add it to answer
    
    public int trap(int[] height) {
        int n = height.length, ans = 0, cm = 0;
        int[] mtn = new int[n];
        for (int i = n - 1; i > -1; i--) {
            mtn[i] = cm = Math.max(height[i], cm);
        }
        cm = 0;
        for (int i = 0; i < n; i++) {
            ans += Math.min(mtn[i], cm = Math.max(cm, height[i])) - height[i];
        }
        return ans;
    }
}
