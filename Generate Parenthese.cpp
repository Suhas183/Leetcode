class Solution {
public:   
    
    void helper(int n, int open, int close, string s, vector<string> &res)
    {
        if(open == n and close == n)
        {
            res.push_back(s);
            return;
        }
        
        else if(open == close)
        {
            s.push_back('(');
            helper(n,open+1,close,s,res);
            s.pop_back();
        }
        
        else 
        {
            if(open < n)
        {
            s.push_back('(');
            helper(n,open+1,close,s,res);
            s.pop_back();
        }
        
         if(close < n)
        {
            s.push_back(')');
            helper(n,open,close+1,s,res);
            s.pop_back();
        }
        }
    }

    vector<string> generateParenthesis(int n) {
        int open = 0;
        int close = 0;
        string s;
        vector<string> res;
        helper(n,open,close,s,res);
        return res;
    }
};
