// gfg question category easy
// Number of 1 Bits

class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here         
        int count =0;
        int rem;
        while(n!=0)
        {
            rem = n%2;
            n=n/2;
            if(rem==1)
            {
                count++;
            }
        }
        return count;
    }
};
