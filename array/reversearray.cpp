// category basic
// gfg question

class Solution{
  public:
  void reverseInGroups(vector<long long>& arr, int n, int k)
   
   {
       for(int i = 0; i< n; i = i + k)
       {
           int left = i;
           int right = min(i + k - 1, n-1);
           while(left < right)
           {
               int temp = arr[left];
               arr[left] = arr[right];
               arr[right] = temp;
               left++;
               right--;
           }
       }
   }
};
