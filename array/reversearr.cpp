

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
        
       int arr[n];
       
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       
       for(int i=n-1;i>=0;i--){
           cout<<arr[i]<<" ";
       }
       cout<<endl;
    }
return 0;
}

// #include <iostream>
// using namespace std;

// void func(int a[], int n){
//     for(int i=0;i<n/2;i++)
//         swap(a[i], a[n-i-1]);
// }

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int a[n];
// 	    for(int i=0;i<n;i++)
// 	        cin>>a[i];
	    
// 	    func(a,n);
	    
// 	    for(int i=0;i<n;i++)
// 	        cout<<a[i]<<" ";
// 	    cout<<endl;   // this line was really necessary
// 	}
// // 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main() 
// {
//   int s;
//   cout<<"ENTER THE USER START INTPUT NUMBER:-";
//   cin>>s;
//    while(s--)
// 	{
// 	 int n;
// 	 cout<<"ENTER THE USER LAST INTPUT NUMBER:-";
// 	 cin>>n;
// 	 int a[n];
// 	  for(int i=0;i<n;i++)
// 	   {
// 	    cout<<"ENTER THE PRESS NEXT NUMBER:-";
// 		cin>>a[i];
// 	   }
// 	  for(int i=n-1;i>=0;i--)
// 	   {
// 		 cout<<a[i]<<" ";
// 	   }
// 	    cout<<endl;  
// 	}
// 	return 0;
// }