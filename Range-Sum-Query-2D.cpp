class NumMatrix {
    int v[1000][1000] = {0};
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m == 0 or n == 0)
        {
            return;
        }
        
        v[0][0] = matrix[0][0];
        
        for(int i = 1; i < n; i++)
        {
            v[0][i] = matrix[0][i] + v[0][i-1];
        }
        
        for(int i = 1; i < m; i++)
        {
            v[i][0] = matrix[i][0] + v[i-1][0];
        }
        
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                v[i][j] = matrix[i][j] + v[i-1][j] + v[i][j-1] - v[i-1][j-1];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if(row1 >= 1 and col1 >= 1)
        return v[row2][col2] - v[row2][col1 - 1] - v[row1 - 1][col2] + v[row1 - 1][col1 - 1];
        
        else if(row1 == 0 and col1 == 0)
        return v[row2][col2];
        
        else if(row1 == 0)
        return v[row2][col2] - v[row2][col1-1];
        
        else 
        return v[row2][col2] - v[row1-1][col2];
        
    }
};
