# https://leetcode.com/problems/number-of-closed-islands/description/
#%%

from typing import List


move = [(0, 1), (0, -1), (1, 0), (-1, 0)]
class Solution:
    def closedIsland(self, grid: List[List[int]]) -> int:
        gx, gy = len(grid), len(grid[0])

        visit = [[0]*gy for _ in range(gx)]
        def dfs(x, y):
            "i need to count all the 0 surrounded by 1"
            visit[x][y] = 1

            ans = True
            for i, j in move:
                cx, cy = x+i, y+j
                if cx<0 or cy<0 or cx>=gx or cy>=gy: 
                    ans = False
                    continue
                if visit[cx][cy] or grid[cx][cy]==1: continue

                if not dfs(cx, cy): 
                    ans = False
            
            return ans

        cc = 0# only those who are sutisfied by condition
        for x in range(gx):
            for y in range(gy):
                if grid[x][y]==0 and visit[x][y]==0:
                    if dfs(x, y):
                        cc+=1
        
        return cc

s = Solution()
# %%
s.closedIsland(grid = [[1,1,1,1,1,1,1,0],[1,0,0,0,0,1,1,0],[1,0,1,0,1,1,1,0],[1,0,0,0,0,1,0,1],[1,1,1,1,1,1,1,0]])
# %%
s.closedIsland([[0,0,1,0,0],[0,1,0,1,0],[0,1,1,1,0]])
# %%
