/*
stack--->

Input: 
Stack = {1, 2, 3, 4, 5}
Output:
ModifiedStack = {1, 2, 4, 5}
Explanation:
As the number of elements is 5 , 
hence the middle element will be the 3rd
element which is deleted

*/

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int> a;
        int middle=(s.size()/2);
        int i=1;
        // if(s.size()&1)
        middle+=1;
        while(i<=sizeOfStack)
        {
            if(i!=middle)
            {
                a.push(s.top());
            }
                s.pop();
            i++;
        }
       while(!a.empty())
       {
           s.push(a.top());
           a.pop();
       } 
    }
};

