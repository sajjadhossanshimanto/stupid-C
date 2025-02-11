# https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/
#%%
from typing import List


move = [(0, 1), (0, -1), (1, 0), (-1, 0)]
class Solution:
    def findMaxFish(self, grid: List[List[int]]) -> int:
        gx, gy = len(grid), len(grid[0])
        max_fish = [0]
        visit = [[0]*gy for _ in range(gx)]
        def dfs(x, y):
            visit[x][y] = 1

            fish = grid[x][y]
            for i, j in move:
                cx, cy = x+i, y+j
                if cx<0 or cy<0 or cx>=gx or cy>=gy or visit[cx][cy] or grid[cx][cy]==0: continue

                fish += dfs(cx, cy)
            
            return fish

        for x in range(gx):
            for y in range(gy):
                if grid[x][y] and visit[x][y]==0:
                    max_fish[0] = max(max_fish[0], dfs(x, y))
        
        return max_fish[0]

s = Solution()
# %%
# 7
s.findMaxFish(grid = [[0,2,1,0],[4,0,0,3],[1,0,0,4],[0,3,2,0]])
# %%
