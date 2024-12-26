class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        res=0
        track=set(nums)
        for num in nums:
            if (num-1) not in track:
                temp=1
                while(num+1) in track:
                    temp+=1
                    num+=1
                res=max(res,temp)
        return res

        