class Solution {

    // left[] stores --> aaj bechna mandatory ho ya aajj se pehle pehle Khridke bechna mandatory ho to dono me se max kya profit aya he

    // right[] stores --> aaj khridna mandatory ho ya ajj ke bad bad me khrid ke baechne mandatory ho to dono me se max profit kisme milega

    // return max of (0,left[i]+right[i]) for each price point;

    public int maxProfit(int[] prices) {
        int n = prices.length;
        int[] left = new int[n];
        int[] right = new int[n];
        int profit = 0;
        int ans = 0;

        int minUntilNow = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            minUntilNow = Math.min(minUntilNow, prices[i]);
            profit = Math.max(profit, prices[i] - minUntilNow);
            left[i] = Math.max(left[i], profit);
        }

        profit = 0;
        int maxUntilNow = Integer.MIN_VALUE;
        for (int i = n - 1; i > -1; i--) {
            maxUntilNow = Math.max(maxUntilNow, prices[i]);
            profit = Math.max(profit, maxUntilNow - prices[i]);
            right[i] = Math.max(right[i], profit);
            ans = Math.max(left[i] + right[i], ans);
        }

        // int ans = 0;
        // for (int i = 0; i < n; i++) {
        //     ans = Math.max(left[i] + right[i], ans);
        // }
        return ans;
    }
}
