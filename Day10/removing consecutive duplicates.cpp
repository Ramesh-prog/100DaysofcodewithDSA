/*
stack-->

Input: 
aaaaaabaabccccccc

Output: 
ababc

Explanation: 
Removing all consecutive duplicates, 
we have no duplicates consecutively.

*/

class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        // Your code here
        stack<char> s1;
        s1.push(s[0]);
        
        for(int i=1;i<=s.length();i++)
        {
            if(s[i]!=s[i-1])
                s1.push(s[i]);
        }
        
        string s2="";
        
        while(s1.empty()==false)
            {
                s2+=s1.top();
                s1.pop();
            }
        
          reverse(s2.begin(), s2.end());
        return s2;
    }
};