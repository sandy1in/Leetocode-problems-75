class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        occ={}
        for i in arr:
            if i in occ:
                occ[i]+=1
            else:
                occ[i]=1
        val=list(occ.values())
        if len(val)==len(set(val)):
            return True
        else:
            return False
        