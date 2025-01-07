class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        res=[]
        for word in words:
            for x in words:
                if x in word and x!=word and x not in res:
                    res.append(x)
        return res