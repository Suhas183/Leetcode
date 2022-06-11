class Solution {
public:
    
    bool solve(vector<vector<char>> &board)
    {
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] == '.')
                {
                    for(char c = '1'; c <= '9'; c++)
                    {
                        if(isValid(board,i,j,c))
                        {
                            board[i][j] = c;
                            
                            if(solve(board))
                            {
                                return true;
                            }
                            
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    
                    return false;
                    
                }
            }
        }
        
        return true;
    }
    
    bool isValid(vector<vector<char>> board, int rows, int cols, char c)
    {
        for(int i = 0; i < 9; i++)
        {
            if(board[rows][i] == c)
            {
                return false;
            }
            
            else if(board[i][cols] == c)
            {
                return false;
            }
            
            else if(board[(rows/3)*3 + i/3][(cols/3)*3 + i%3] == c)
            {
                return false;
            }
        }
        
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
