class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int n=nums.size();
        int r=0,w=0;
        int b=n-1;
        while(w<=b)
        {
            if(nums[w]==0)
            {
                swap(nums[w],nums[r]);
                r++;
                w++;
            }else if(nums[w]==1)
            {
                w++;
            }
            else{
                swap(nums[w],nums[b]);
                b--;
            }
        }   
    }
};

