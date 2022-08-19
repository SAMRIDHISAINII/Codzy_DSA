// leetcode question number 344

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]


class Solution {
public:
    void reverseString(vector<char>& s) {
//         first to last approach
        
         int i = 0;
        int j = s.size() - 1;
        while(i < j){
            swap(s[i], s[j]);
            i++, j--;
        }
        
    }
    
};

