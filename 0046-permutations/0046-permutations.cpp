class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        backtrack(nums, 0,ans);
        return ans;
    }
    
    void backtrack(vector<int>& nums, int start,vector<vector<int>>& res) 
    {
        if(start==nums.size())
        {
            res.push_back(nums);
            return;
        }
        for(int i=start;i<nums.size();i++)
        {
            swap(nums[start],nums[i]);
            backtrack(nums,start+1,res);
            swap(nums[start],nums[i]);
        }
    }
};