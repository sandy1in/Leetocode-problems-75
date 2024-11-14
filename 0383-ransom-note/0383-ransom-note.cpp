class Solution {
public:
    bool canConstruct(string a, string b) 
    {
        int n=b.size();
        int m=a.size();
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[b[i]]++;
        }
        for(int j=0;j<m;j++)
        {
            if(mp[a[j]]>0)
            {
                mp[a[j]]--;
            }
            else
                return false;
        }
     
        return true;
    }
};