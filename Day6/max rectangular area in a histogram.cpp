/*
https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1/?track=DSASP-Stack&batchId=154#
refer gfg on stack problem
*/

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack<int>s;
        long long res=0,curr;
        int tp;
        for(int i=0;i<n;i++)
        {
            while(s.empty()==false and arr[s.top()]>=arr[i])
            {
                tp=s.top();
                s.pop();
                curr=arr[tp]*(s.empty()?i:(i-s.top()-1));
                res=max(curr,res);
            }
            s.push(i);
        }
        while(s.empty()==false)
        {
            tp=s.top();
            s.pop();
            curr=arr[tp]*(s.empty()?n:(n-s.top()-1));
            res=max(curr,res);
        }
        return res;
    }
};
