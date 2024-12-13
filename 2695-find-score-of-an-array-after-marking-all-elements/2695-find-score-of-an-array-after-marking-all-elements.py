class Solution:
    def findScore(self, nums: List[int]) -> int:
        n=len(nums)
        new_nums=sorted((num,idx) for idx,num in enumerate(nums))
        sc=0
        for num,idx in new_nums:
            if nums[idx]!=-1:
                sc+=num
                nums[idx]=-1
                if idx>0:
                    nums[idx-1]=-1
                if idx<n-1:
                    nums[idx+1]=-1
        return sc