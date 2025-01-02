class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        pre=[]
        res=[]
        count=0
        def isVowel(c):
            return c in 'aeiouAEIOU'
        for word in words:
            if isVowel(word[0]) and isVowel(word[-1]):
                count+=1
            pre.append(count)
        for query in queries:
            l,r=query
            if l==0:
                res.append(pre[r])
            else:
                res.append(pre[r]-pre[l-1])
        return res
        