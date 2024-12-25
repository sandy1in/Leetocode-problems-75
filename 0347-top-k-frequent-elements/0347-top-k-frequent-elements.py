class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq=Counter(nums)
        sl=sorted(set(nums),key=lambda x:(-freq[x],nums.index(x)))
        return sl[:k]
        
        