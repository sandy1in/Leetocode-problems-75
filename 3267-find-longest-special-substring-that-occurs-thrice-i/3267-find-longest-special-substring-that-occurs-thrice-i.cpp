class Solution {
public:
    bool func(string &s,int n,int temp)
    {
        vector<int> ans(26,0);
        int a=0;
        for(int i=0;i<n;i++)
        {
            while(s[a]!=s[i])
            {
                a++;
            }
            if(i-a+1>=temp)
            {
                ans[s[i]-'a']++;
            }
            if(ans[s[i]-'a']>2)
            {
                return true;
            }
        }
        return false;
    }
    int maximumLength(string s) 
    {
        int n=s.size();
        int x=1,y=n;
        if(!func(s,n,x))
        {
            return -1;
        }
        while(x+1<y)
        {
            int m=(x+y)/2;
            if(func(s,n,m))
            {
                x=m;
            }else{
                y=m;
            }
        }
        return x;
    }
};