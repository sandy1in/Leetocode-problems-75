class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
       
        int psum = 0 ;
        int ans = -9999;
        for(int i=1;i<=gain.size();i++)
        {
              psum +=  gain[i-1];
              ans = max( ans , psum);
        }
        if(ans < 0) 
            return 0;
      return ans;
    }
};