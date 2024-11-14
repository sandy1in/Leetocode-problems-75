class Solution {
public:
    bool isValid(string s) 
    {
        stack<char>sk;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]=='{'|| s[i]=='[')
            {
                sk.push(s[i]);
            }
            else
            {
                if(sk.empty() || ( s[i]==')' && sk.top()!='(')|| (s[i] == '}' && sk.top() != '{') ||
                    (s[i] == ']' && sk.top() != '['))
                {
                    return false;
                }
                sk.pop();
            }
        }   
        return sk.empty(); 
    }
};

                