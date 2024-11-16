class Solution:
    def findLengthOfShortestSubarray(self, arr: List[int]) -> int:
        n=len(arr)
        i=0
        while i+1<n and arr[i]<=arr[i+1]:
            i+=1
        if i==n-1:
            return 0
        j=n-1
        while j>0 and arr[j-1]<=arr[j]:
            j-=1
        
        
        res=min(n-i-1,j)
        x,y=0,j
        while x<=i and y<n:
            if arr[x]<=arr[y]:
                res=min(res,y-x-1)
                x+=1
            else:
                y+=1
        return res
        