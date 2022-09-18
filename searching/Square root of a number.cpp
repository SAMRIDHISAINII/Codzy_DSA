//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        // return sqrt(x);
        // jugaad qay of doing but properly doing with searching
        long long i=0;
        long long j=x;
        long long mid;
        
        if(x==1)
        {
            return 1;
        }
        
        while(abs(i-j)>1)
        {
            mid = (j+i)/2;
            if(mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid>x){
                j = mid;
            }
            else if(mid*mid<x)
            i=mid;
        }
        return i;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends
