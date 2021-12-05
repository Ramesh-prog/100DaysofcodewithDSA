/*
stack---->

N = 5
A = {1 2 3 4 5}
Output: 
1 1 1 1 1
Explanation: 
After pushing elements to the stack, 
the stack will be "top -> 5, 4, 3, 2, 1". 
Now, start popping elements from the stack
popping 5: min in the stack is 1.popped 5
popping 4: min in the stack is 1. popped 4
popping 3: min in the stack is 1. popped 3
popping 2: min in the stack is 1. popped 2
popping 1: min in the stack is 1. popped 1

*/

int minEl = INT_MIN;
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int>s;
   s.push(arr[0]);
   minEl = arr[0];
   
   for(int i=1;i<n;i++)
   {
         if (arr[i] >= minEl) 
        {
            s.push(arr[i]);    
        } 
        else 
        {
            s.push(arr[i] * 2 - minEl);
            minEl = arr[i];
        }
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while (!s.empty()) 
    {
        int top = s.top();
        cout << minEl << " ";

        if (top < minEl) 
        {
            minEl = 2 * minEl - top;
        }
        s.pop();
    }
}