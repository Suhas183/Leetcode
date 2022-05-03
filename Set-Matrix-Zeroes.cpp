class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        vector<int> v_row(rows,0);
        vector<int> v_col(cols,0);
        
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(matrix[i][j] == 0)
                {
                    v_row[i] = 1;
                    v_col[j] = 1;
                }
            }
        }
        
        for(int i = 0; i < rows; i++)
        {
            if(v_row[i] == 1)
            {
                int count = 0;
                while(count < cols)
                {
                    matrix[i][count++] = 0;
                }
            }
        }
        
        for(int j = 0; j < cols; j++)
        {
            if(v_col[j] == 1)
            {
                int count = 0;
                while(count < rows)
                {
                    matrix[count++][j] = 0;
                }
            }
        }
    }
};
