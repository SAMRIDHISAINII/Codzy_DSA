// leetcode question number 125
// gfg question 
// category Palindrome String easy

class Solution {
public:
    bool isPalindrome(string s) {
      
// start l
//       end r

    int l = 0;
    int r = s.length() - 1;

    while (l < r) {
      while (l < r && !isalnum(s[l]))
        ++l;
      while (l < r && !isalnum(s[r]))
        --r;
      if (tolower(s[l]) != tolower(s[r]))
        return false;
      ++l;
      --r;
    }

    return true;


    }
};
