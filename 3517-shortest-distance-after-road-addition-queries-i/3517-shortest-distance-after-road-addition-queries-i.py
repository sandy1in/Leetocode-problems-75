class Solution:
    def shortestDistanceAfterQueries(self, n: int, queries: List[List[int]]) -> List[int]:
        adj=[[i+1] for i in range(n)]
        def dfs():
            q=deque()
            q.append((0,0))
            vis=set()
            vis.add((0,0))
            while q:
                cur,l=q.popleft()
                if cur==n-1:
                    return l
                for nei in adj[cur]:
                    if nei not in vis:
                        q.append((nei,l+1))
                        vis.add(nei)
        res=[]
        for src,dst in queries:
            adj[src].append(dst)
            res.append(dfs())
        return res
        