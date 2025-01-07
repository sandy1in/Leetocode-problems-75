class Solution {
public:
    int numTrees(int n) 
    {
        vector<int> res(n+1,1);
        for(int i=2;i<=n;i++)
        {
            int ans=0;
            for(int root=1;root<=i;root++)
            {
                ans+=res[root-1]*res[i-root];
            }
            res[i]=ans;
        }    
        return res[n];
    }
};
//recursion
    /*
        if(n <= 1) return 1;
        int ans = 0;
        for(int i = 1; i <= n; i++) 
            ans += numTrees(i-1) * numTrees(n-i);
        return ans;
    */