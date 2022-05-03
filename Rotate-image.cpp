class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int sum = 0;
        
        int count = n/2;
        
        
        for(int i = 0; i < count; i++)
        {
            for(int j = i; j < n - i - 1; j++)
            {
            swap(matrix[i][j],matrix[j][n-1-i]);
            swap(matrix[i][j],matrix[n-1-i][n-j-1]);
            swap(matrix[i][j],matrix[n-j-1][i]);
            }
        }
    }
};
