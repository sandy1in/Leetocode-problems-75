class Solution {
public:
    long long func(vector<int>&nums,int val,int n)
    {
        int l=0,r=n-1;
        long long res=0;
        while(l<=r)
        {
            if((nums[l]+nums[r])<val)
            {
                res+=r-l;
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return func(nums,upper+1,n)-func(nums,lower,n);
    }
};