class Solution:
    def makeFancyString(self, s: str) -> str:
        ans=s[0]
        c=1
        for i in range(1,len(s)):
            if s[i]==ans[-1]:
                c+=1
                if c<3:
                    ans+=s[i]
            else:
                c=1
                ans+=s[i]
        return ans
        