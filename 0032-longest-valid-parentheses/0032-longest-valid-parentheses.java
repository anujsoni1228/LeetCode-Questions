class Solution {
// We use a stack to keep track of the indices of parentheses in the input string.

// We scan the input string character by character from left to right.

// If the current character is '(', we push its index to the stack. This indicates that we have encountered an opening parenthesis.

// If the current character is ')', we perform the following checks:

// If the stack is empty or the character at the top of the stack is ')', we push the index of ')' to the stack. This means that we have encountered a closing parenthesis, but there is no corresponding opening parenthesis yet.
// If the character at the top of the stack is '(', we have found a matching pair of parentheses. In this case, we pop the index of '(' from the stack, indicating that the opening and closing parentheses are matched.
// After the scan is complete, the stack will contain the indices of unmatched parentheses. We can use this information to find the longest valid substring.

// If the stack is empty, it means that all parentheses have been matched, and the entire input string is valid. In this case, we return the length of the input string as the answer.

// If the stack is not empty, we need to find the longest valid substring. We initialize the answer variable (ans) to 0.

// We start by setting x to the length of the input string and y to the index of the top element in the stack.

// We enter a loop where we repeatedly pop elements from the stack until it becomes empty.

// For each popped element, we calculate the length of the substring between x and y (exclusive) and update the answer (ans) if this length is greater than the current answer.

// After calculating the length, we update x to the popped index (indicating the position of the last unmatched parenthesis) and y to the index of the new top element in the stack (or -1 if the stack is empty).

// Finally, we calculate the length of the substring between the last popped index and -1 (indicating the start of the string) and update the answer (ans) again if necessary.

// We return the value of ans,
    public int longestValidParentheses(String s) {
        Stack<Integer> stack = new Stack<>();

        // Step 1: Scan the string from beginning to end
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                stack.push(i); // Push the index of '(' to the stack
            } else if (stack.empty() || s.charAt(stack.peek()) == ')') {
                stack.push(i); // Push the index of ')' to the stack
            } else if (s.charAt(stack.peek()) == '(') {
                stack.pop(); // Found a matching pair, pop the index of '(' from the stack
            }
        }

        // Step 2: Find the longest valid substring
        if (stack.size() == 0) return s.length(); // If the stack is empty, the whole input string is valid

        int ans = 0, x = s.length(), y = stack.peek();
        while (!stack.empty()) {
            ans = Math.max(ans, x - y - 1);
            x = stack.peek();
            stack.pop();
            y = (stack.empty() ? -1 : stack.peek());
        }
        ans = Math.max(ans, x - y - 1);

        return ans; // Return the length of the longest valid substring
    }
}
