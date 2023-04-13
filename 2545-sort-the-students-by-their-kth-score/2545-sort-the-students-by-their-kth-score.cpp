int K=2;
class Solution {
public:
    static bool c(vector<int> a,vector<int> b)
    {
        return a[K]>b[K];
    }
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        K=k;
        sort(s.begin(),s.end(),&c);
        return s;
    }
};