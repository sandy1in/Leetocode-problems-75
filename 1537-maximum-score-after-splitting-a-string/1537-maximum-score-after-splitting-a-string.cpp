class Solution {
public:
    int maxScore(string s) 
    {
        int n=s.size();
        int o=0,z=0;
        int score=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='1')
            {
                o++;
            }else{
                z++;
            }
            score=max(score,z-o);
        }   
        if(s[s.size()-1]=='1')
        {
            o++;
        } 
        return score+o;
    }
};