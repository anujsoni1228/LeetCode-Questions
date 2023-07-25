class Solution {

    public int maximizeSum(int[] nums, int k) {
        int max = Integer.MIN_VALUE, ans = 0;

        for (int i = 0; i < nums.length; i++) {
            max = Math.max(max, nums[i]);
        }
        return (((max + k - 1) * (max + k)) / 2) - (((max - 1) * (max)) / 2);
    }
}
