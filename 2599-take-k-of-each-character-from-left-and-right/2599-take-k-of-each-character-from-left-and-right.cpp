class Solution {
public:
    int takeCharacters(string s, int k) 
    {
        vector<int> count(3,0),curr(3,0);
        int n=s.size();
        int ml=0,l=0;

        for(char c:s)
        {
            count[c-'a']++;
        }
        if(count[0]<k|| count[1]<k|| count[2]<k)
        {
            return -1;
        }
        
        for(int i=0;i<n;i++)
        {
            curr[s[i]-'a']++;
            while(l<=i && (curr[0]>count[0]-k || curr[1]>count[1]-k|| curr[2]>count[2]-k))
            {
                curr[s[l++]-'a']--;
            }
            ml=max(ml,i-l+1);
        }
        return n-ml;
        
    }
};