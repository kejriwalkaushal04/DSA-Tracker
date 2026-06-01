class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        set<int> row;
        set<int> col;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for (auto it : row) {
            for (int j = 0; j < m; j++)
                a[it][j] = 0;
        }

        for (auto it : col) {
            for (int i = 0; i < n; i++)
                a[i][it] = 0;
        }
        return ;
    }
};