class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
         
    vector<vector<int>> v;
    
        for(int i = 0; i < numRows; i++)
    {
        int count = 0;
        v.push_back(vector<int>());

        for(int j = 0; j < numRows + i; j++)
        {
            if(numRows - i - j - 1 == 0 or j == numRows + i - 1)
            {
                v[i].push_back(1);
            }

            else if(numRows - i - j - 1 < 0 && (numRows - i - j - 1) % 2 == 0)
            {
                v[i].push_back(v[i-1][count] + v[i-1][count + 1]);
                count++;
            }

        }

    }
    
    return v;
        
    }
};
