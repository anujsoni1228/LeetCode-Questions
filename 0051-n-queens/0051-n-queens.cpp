class Solution {
public:
    void helper(int n, vector<vector<string>>& ans, vector<string>& b, int r, vector<bool>& o) {
        if (r == n) {
            ans.push_back(b);  // If we have placed queens in all rows, add the current board configuration to the result
            return;
        }

        for (int i = 0; i < n; i++) {
            if (!o[i]) {  // If the column 'i' is not occupied
                bool c = true;

                // Check upper-left diagonal
                for (int x = r - 1, y = i - 1; x >= 0 && y >= 0; x--, y--) {
                    if (b[x][y] == 'Q') {  // If there is a queen in the upper-left diagonal, mark 'c' as false
                        c = false;
                        break;
                    }
                }

                // Check upper-right diagonal
                for (int x = r - 1, y = i + 1; x >= 0 && y < n; x--, y++) {
                    if (b[x][y] == 'Q') {  // If there is a queen in the upper-right diagonal, mark 'c' as false
                        c = false;
                        break;
                    }
                }

                if (c) {  // If it is safe to place a queen at (r, i)
                    b[r][i] = 'Q';  // Place the queen at (r, i)
                    o[i] = true;  // Mark the column 'i' as occupied
                    helper(n, ans, b, r + 1, o);  // Recursively move to the next row
                    b[r][i] = '.';  // Backtrack: remove the queen from (r, i)
                    o[i] = false;  // Mark the column 'i' as unoccupied for future placements
                }
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> b(n, string(n, '.'));  // Initialize the chessboard with '.' representing empty cells
        vector<bool> o(n, false);  // Keep track of occupied columns
        helper(n, ans, b, 0, o);  // Start the backtracking process from the first row
        return ans;  // Return the result
    }
};
