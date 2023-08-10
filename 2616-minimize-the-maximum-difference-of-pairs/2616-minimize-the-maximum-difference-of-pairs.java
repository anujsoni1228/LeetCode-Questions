class Solution {

    public int minimizeMax(int[] nums, int p) {
        Arrays.sort(nums);
        int l = 0, r = nums[nums.length - 1] - nums[0];
        while (l <= r) {
            int m = l + (r - l) / 2;
            int k = 0;
            for (int i = 1; i < nums.length && k < p; i++) {
                if (nums[i] - nums[i - 1] <= m) {
                    i++;
                    k++;
                }
            }
            if (k == p) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return l;
    }
}
