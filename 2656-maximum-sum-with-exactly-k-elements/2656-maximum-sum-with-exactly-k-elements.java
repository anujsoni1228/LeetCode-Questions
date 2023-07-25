class Solution {

    public int maximizeSum(int[] nums, int k) {
        int max = Integer.MIN_VALUE, ans = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > max) max = nums[i];
        }
        while (k != 0) {
            ans += max;
            max++;
            k--;
        }
        return ans;
    }
}
