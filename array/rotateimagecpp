class Solution{
    public:
    void rotate(vector<vector<int>>& m)
    {
    //         on2 it was than we haad to optimze
//         hence transpose
//         reverse the row in order for the rseult 
//         space o1
//         tc on2+on2

        int n = m.size();
        
        for(int i=0; i<n; i++)
        
            for(int j =0; j<i; j++)
                swap(m[i][j], m[j][i]);
            
            
        for(int i=0; i<n; i++)
       reverse(m[i].begin(), m[i].end());
        
    }
};
