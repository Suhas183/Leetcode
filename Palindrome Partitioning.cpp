class Solution {
public:
    bool isValid(string s)
    {
        int n = s.length();
        for(int i = 0; i < n/2; i++)
        {
            if(s[i] != s[n - i - 1])
            {
                return false;
            }
        }
        
        return true;
    }
    void palindrome(string s, int index, string temp, vector<string> pal, vector<vector<string>> &res)
    {

        if(index == s.length())
        {
            res.push_back(pal);
            return;
        }
        
        for(int i = index; i < s.length(); i++)
        {
            temp = s.substr(index,i - index + 1);
            
            if(isValid(temp))
            {
                pal.push_back(temp);
                palindrome(s,i+1,temp,pal,res);
                pal.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        string temp;
        vector<string> pal;
        vector<vector<string>> res;
        palindrome(s,0,temp,pal,res);
        return res;
    }
};
