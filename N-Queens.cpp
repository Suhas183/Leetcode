class Solution {
public:
    void solve(int cols, vector<string> board, vector<int> leftrows, vector<int> upperDiagonal, vector<int> lowerDiagonal, vector<vector<string>> &res, int n)
    {
        if(cols == n)
        {
            res.push_back(board);
            return;
        }
        
        for(int rows = 0; rows < n; rows++)
        {
            if(leftrows[rows] == 0 and upperDiagonal[n-1+cols-rows] == 0 and lowerDiagonal[rows + cols] == 0)
            {
                board[rows][cols] = 'Q';
                leftrows[rows] = 1;
                upperDiagonal[n-1+cols-rows] = 1;
                lowerDiagonal[rows+cols] = 1;
                solve(cols+1,board,leftrows,upperDiagonal,lowerDiagonal,res,n);
                lowerDiagonal[rows+cols] = 0;
                upperDiagonal[n-1+cols-rows] = 0;
                leftrows[rows] = 0;
                board[rows][cols] = '.';
                
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<int> leftrows(n,0), upperDiagonal(2*n - 1), lowerDiagonal(2*n - 1);
        string s(n,'.');
        vector<string> board(n);
        
        for(int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        
        solve(0,board,leftrows,upperDiagonal,lowerDiagonal,res,n);
        
        return res;
    }
};
