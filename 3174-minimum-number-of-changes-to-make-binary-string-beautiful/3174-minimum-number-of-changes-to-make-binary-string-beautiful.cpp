class Solution {
public:
    int minChanges(const std::string& s) 
    {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i+=2)
        {
            if(s[i]!=s[i+1])
            {
                ans++;
            }
        }
        return ans;
    }
};

