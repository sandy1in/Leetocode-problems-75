class Solution:
    def canSortArray(self, nums: List[int]) -> bool:
        pmax=cmin=cmax=prev=0
        for n in nums:
            curr=n.bit_count()
            if prev==curr:
                cmin=min(cmin,n)
                cmax=max(cmax,n)
            elif cmin<pmax:
                return False
            else:
                pmax=cmax
                cmin=cmax=n
                prev=curr
        return cmin>=pmax
        