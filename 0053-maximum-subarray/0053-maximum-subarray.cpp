class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum=0,maxsum=-1e9;
        
        for(int i:nums)
        {
            sum+=i;
            maxsum=max(maxsum,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxsum;
    }
};
    