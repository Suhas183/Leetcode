class Solution {
public:
    
    static bool compare(vector<int> v1, vector<int> v2)
    {
        return (v1[0]*v1[0] + v1[1]*v1[1]) < (v2[0]*v2[0] + v2[1]*v2[1]);
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
        sort(points.begin(),points.end(),compare);
        vector<vector<int>> v;
        copy(points.begin(), points.begin() + k, back_inserter(v));
        return v;
    }
};
