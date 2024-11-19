class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        long long res = 0;
        int n=nums.size();
        unordered_map<int, int> mp;
        long long cs=0;
        int l=0;
        for(int r=0;r<n;r++)
        {
            cs+=nums[r];
            mp[nums[r]]++;
            if(r-l+1>k)
            {
                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                {
                    mp.erase(nums[l]);
                }
                cs-=nums[l];
                l++;
            }
            if (mp.size() == k && (r-l+1)==k) 
            {
                res = max(res, cs);
            }
        }
        return res;
    }
};