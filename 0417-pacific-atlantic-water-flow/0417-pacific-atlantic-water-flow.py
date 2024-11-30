class Solution:
    def pacificAtlantic(self, heights):
        if not heights or not heights[0]:
            return []

        m, n = len(heights), len(heights[0])
        pacific = [[False] * n for _ in range(m)]
        atlantic = [[False] * n for _ in range(m)]
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

        def dfs(r, c, ocean):
            ocean[r][c] = True
            for dr, dc in directions:
                nr, nc = r + dr, c + dc
                if (0 <= nr < m and 0 <= nc < n and 
                    not ocean[nr][nc] and heights[nr][nc] >= heights[r][c]):
                    dfs(nr, nc, ocean)

        for i in range(m):
            dfs(i, 0, pacific)
            dfs(i, n - 1, atlantic)
        for j in range(n):
            dfs(0, j, pacific)
            dfs(m - 1, j, atlantic)

        result = []
        for i in range(m):
            for j in range(n):
                if pacific[i][j] and atlantic[i][j]:
                    result.append([i, j])

        return result
