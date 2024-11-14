class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> ranges;
    int n = nums.size();
    
    if (n == 0) return ranges;
    
    int start = nums[0];
    
    for (int i = 1; i < n; i++) 
    {
        if (nums[i] != nums[i-1] + 1) 
        {
            if (start == nums[i-1]) 
            {
                ranges.push_back(to_string(start));
            } else {
                ranges.push_back(to_string(start) + "->" + to_string(nums[i-1]));
            }
            start = nums[i];
        }
    }
    
    if (start == nums[n-1]) {
        ranges.push_back(to_string(start));
    } else {
        ranges.push_back(to_string(start) + "->" + to_string(nums[n-1]));
    }
    
    return ranges;
    }
};