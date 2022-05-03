class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        
    int m = matrix.size();
    int n = matrix[0].size();
    int sr = 0;
    int er = m - 1;
    int sc = 0;
    int ec = n - 1;

    while(sc <= ec && sr <= er)
    {
        for(int i = sr; i <= ec; i++)
        {
            v.push_back(matrix[sr][i]);
        }

        for(int i = sr + 1; i <= er; i++)
        {
            v.push_back(matrix[i][ec]);
        }

        for(int i = ec - 1; i >= sc; i--)
        {
            if(sr == er)
            {
                break;
            }
            v.push_back(matrix[er][i]);
        }

        for(int i = er - 1; i >= sr + 1; i--)
        {
            if(sc == ec)
            {
                break;
            }
            v.push_back(matrix[i][sc]);
        }

        sr++;
        sc++;
        er--;
        ec--;
    }
        return v;
        
    }
};
