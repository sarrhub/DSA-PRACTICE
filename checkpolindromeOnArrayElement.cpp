//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	int flag =0;
    	for(int i = 0; i<n; i++){
    	    
    	    int rev = 0;
    	    int digit = a[i];
    	    do{
    	       int num = digit%10;
    	       digit = digit/10;
    	        rev = rev *10 + num;
    	       }while(digit>0);
    	       if(a[i]!=rev){
    	           flag= 1;
    	           break;
    	       }
    	    
    	}
    	if(flag == 0){
    	    return 1;
    	}else{
    	    return 0;
    	}
    	
    }
};

//{ Driver Code Starts.

int main()
{
	// int t;
	// cin>>t;
	// while(t--)
	// {
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	// }
}
// } Driver Code Ends