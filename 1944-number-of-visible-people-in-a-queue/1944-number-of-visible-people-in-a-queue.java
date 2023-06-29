class Solution {

    // sab kuch same as next greater element
    // bus ye count karna he ki current position or next greater element (in right) ke bich me kitne log he (obviously vo chhote homnge annd the all will be visible)
    // and also kitne logo ko stack me se pop kr paa rha hu me

    // NGE LOGIC below
    // - (stack me se sare khudse chote elements ko pop krdo)
    // ans ( ans calculate krdo)
    // + (khud ko bhi push krdo)

    public int[] canSeePersonsCount(int[] heights) {
        int n = heights.length;
        Stack<Integer> stack = new Stack<>();
        for (int i = n - 1; i >= 0; i--) {
            int ans = 0;
            while (!stack.empty() && stack.peek() < heights[i]) {
                ans++;
                stack.pop();
            }
            if (!stack.empty()) {
                ans++;
            }
            stack.push(heights[i]);
            heights[i] = ans;
        }
        return heights;
    }
}
