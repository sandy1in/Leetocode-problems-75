class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        bset=set(banned)
        s,c=0,0
        for i in range(1,n+1):
            if i in bset:
                continue

            if s+i>maxSum:
                break
                
            c+=1
            s+=i
                
        return c
        