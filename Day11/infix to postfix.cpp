/*
Input: str = "a+b*(c^d-e)^(f+g*h)-i"
Output: abcd^e-fgh*+^*+i-
Explanation:
After converting the infix expression 
into postfix expression, the resultant 
expression will be abcd^e-fgh*+^*+i-
*/

class Solution
{
    public:
    string infixToPostfix(string s)
    {
        stack<char> st;
        string res = "";
        
        for(int i=0 ;i<s.length() ;i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= 'A' && s[i] <= 'Z'))
            res += s[i];
            
            else if(s[i] == '(')
            st.push(s[i]);
            
            else if(s[i] == ')')
            {
                while(!st.empty() && st.top()!='(')  //put !st.empty() before, because in && left expression is executed first
                {
                    res += st.top();
                    st.pop();
                }
                if(st.top()=='(')
                st.pop();
            }
            
            else if(s[i]=='+' || s[i]=='-')
            {
                while(!st.empty())
                {
                    if(st.top() == '(')
                    break;
                    
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            
            else if(s[i]=='*' || s[i]=='/')
            {                            //put brackets in below line, else && will executed before ||, as it has higher precedence than ||
                while(!st.empty() && (st.top() == '^' || st.top() =='*' || st.top() =='/'))
                {
                    if(st.top() == '(')
                    break;
                    
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            
            else if(s[i]=='^')
            {
                st.push(s[i]);
            }
            
            
        }
        
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        
        return res;
    }

};