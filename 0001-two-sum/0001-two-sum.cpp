class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int temp;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                temp=nums[i]+nums[j];
            if(temp==target)
            {
                return {i,j};
            }
            }
        }
        return {};
    }
};