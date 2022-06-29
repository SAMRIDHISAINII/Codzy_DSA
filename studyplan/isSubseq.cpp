// 392. Is Subsequence

class Solution {
public:
   
          bool isSubsequence(string s, string t) {
       if(t.size()==0 && s.size()==0)
            return true;
        if(s.size()>t.size() ||  t.size()==0)
            return false;
        int j=0;
        for(int i=0;i<t.size();i++)
            if(t[i]==s[j])
                j++;
        if(j==s.size())
            return true;
        return false;
              
    }
        
    
};
