/*
stack------>

Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
since it doesn't exist, it is -1.
*/

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        // Your code here
        stack<long long>s;
        vector<long long>v;
        s.push(arr[n-1]);
        v.push_back(-1);
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false && s.top()<=arr[i])
                s.pop();
            long long NextGr=s.empty()?-1:s.top();
            v.push_back(NextGr);
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends