class Solution {
public:
    string reverseWords(string s) {
        vector<string> storeString;
        string temp,res="";
        int n = s.length();
        bool whitespace = false;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == ' ')
            {
                whitespace = true;
                if(temp.size() != 0)
                {
                    storeString.push_back(temp);
                }
                temp.clear();
            }
            
            else if(whitespace and s[i] != ' ')
            {
                whitespace = false;
                temp.push_back(s[i]);
            }
            
            else
            {
                temp.push_back(s[i]);
            }
        }
        
        if(temp.size() != 0)
        {
            storeString.push_back(temp);
        }
        
        n = storeString.size();
        if(n != 0)
        {
        res = storeString[n-1];
        for(int i = storeString.size() - 2; i >= 0; i--)
        {
            res += (" " + storeString[i]) ;
        }
        }
        
        return res;
    }
};
