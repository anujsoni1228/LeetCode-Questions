class Solution {
// In the given code, the algorithm uses binary search to find the minimum maximum difference that can be achieved when forming `p` pairs of indices from the sorted `nums` array. The goal is to minimize this maximum difference among all possible pairs.

// Here's why the code returns `l` instead of `r`:

// 1. `l` and `r` are two pointers used to bound the possible range of the minimum maximum difference. Initially, `l` starts from 0 (minimum possible difference) and `r` starts from the maximum difference between the largest and smallest elements in the sorted array (`nums[nums.length - 1] - nums[0]`).

// 2. The binary search iteratively tries to find the best value for the minimum maximum difference. It calculates the middle value `m` between `l` and `r` and then checks if it's possible to form `p` pairs with a maximum difference less than or equal to `m`.

// 3. The inner loop iterates through the sorted array, comparing adjacent elements and checking if the difference between them (`nums[i] - nums[i - 1]`) is less than or equal to the current middle value `m`. If it is, it means we can consider this pair in our count, and we increment both `i` and `k`.

// 4. The binary search adjusts the pointers based on the value of `k` after the inner loop. If `k` equals `p`, it means we were able to find `p` pairs with a maximum difference less than or equal to `m`, and we try to find a smaller value for the minimum maximum difference by adjusting the right pointer `r` to `m - 1`.

// 5. If `k` is less than `p`, it means we couldn't find `p` pairs with a maximum difference less than or equal to `m`, and we need to increase the minimum maximum difference. Therefore, we adjust the left pointer `l` to `m + 1`.

// 6. The binary search continues until `l` is greater than `r`, at which point it has found the smallest possible value for the minimum maximum difference, and this value is stored in `l`.

// Since `l` represents the smallest value for the minimum maximum difference that can be achieved with `p` pairs of indices, the function returns `l`. It's worth noting that `r` could also be a valid answer, but it might not always represent the smallest value, so we choose the smaller value between `l` and `r`.
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
