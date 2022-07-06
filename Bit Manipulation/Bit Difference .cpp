#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int countBitsFlip(int a, int b){
        
        // Your logic here
        int x = (a^b);
        int ans = 0;
        while(x>0)
        {
            if(x%2!=0)
            {
                ans++;
            }
            x=x/2;
        }
        return ans;
        
    }
};
// driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b; 

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  
