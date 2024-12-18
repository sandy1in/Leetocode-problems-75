class Solution:
    def continuousSubarrays(self, nums: List[int]) -> int:
        n=len(nums)
        sw=SortedList()
        start=0
        total_subs=0
        for end in range(n):
            sw.add(nums[end])
            while sw[-1]-sw[0]>2:
                sw.remove(nums[start])
                start+=1
            total_subs+=end-start+1
        return total_subs
        