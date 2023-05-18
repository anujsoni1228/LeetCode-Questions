class Solution {
public:
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int c;
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            c = 0;
            for (int j = 0; j < points.size(); j++) {
                // Here it is a brute force solution in which I simply have used the equation of circle that is X^2 + Y^2 <= R^2
                if (pow(points[j][0] - queries[i][0], 2) + pow(points[j][1] - queries[i][1], 2) <= pow(queries[i][2], 2))
                    c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};
