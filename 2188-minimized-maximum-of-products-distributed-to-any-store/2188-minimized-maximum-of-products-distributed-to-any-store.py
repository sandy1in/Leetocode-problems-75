class Solution(object):
    def func(self,n,quan,item):
        if item==0:
            return False
        st=0
        for p in quan:
            st+=(p-1)//item+1
            if st>n:
                return False
        return True

    def minimizedMaximum(self, n, quan):
        l=1
        h=max(quan)
        res=-1
        while l<=h:
            mid=(l+h)//2
            if self.func(n,quan,mid):
                res=mid
                h=mid-1
            else:
                l=mid+1
        return res



    