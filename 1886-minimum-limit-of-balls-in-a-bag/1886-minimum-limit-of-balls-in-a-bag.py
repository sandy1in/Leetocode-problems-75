class Solution:
    def minimumSize(self, nums: List[int], maxOperations: int) -> int:
        def func(penal):
            op=0
            for balls in nums:
                if balls>penal:
                    op+=(balls-1)//penal
            return op<=maxOperations
        l,h=1,max(nums)
        while l<h:
            mid=(l+h)//2
            if func(mid):
                h=mid
            else:
                l=mid+1
        return l