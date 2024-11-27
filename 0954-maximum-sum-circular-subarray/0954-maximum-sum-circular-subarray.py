class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        ms=nums[0]
        curr=0
        cs=0
        total=0
        maxsum=nums[0]
        for i in nums:
            cs=max(cs,0)
            cs+=i
            maxsum=max(cs,maxsum)
            curr=min(curr,0)
            curr+=i
            ms=min(ms,curr)
            total+=i
        if maxsum<0:
            return maxsum
        return max(total-ms,maxsum)
        