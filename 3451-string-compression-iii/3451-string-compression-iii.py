class Solution:
    def compressedString(self, word: str) -> str:
        res=""
        c,n=1,len(word)
        char=word[0]
        for i in range(1,n):
            if word[i]==char and c<9:
                c+=1
            else:
                res+=str(c)+char
                char=word[i]
                c=1
        res+=str(c)+char
        return res
        