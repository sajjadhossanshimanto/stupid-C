# https://leetcode.com/problems/number-of-enclaves/description/

#%%
from typing import List


move = [(0, 1), (0, -1), (1, 0), (-1, 0)]
inf = float("inf")
class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        gx, gy = len(grid), len(grid[0])

        def dfs(x, y):
            grid[x][y] = 0

            cell = 1
            for cx, cy in move:
                cx, cy = x+cx, y+cy
                if cx<0 or cy<0 or cx>=gx or cy>=gy: 
                    cell = inf
                    continue
                if grid[cx][cy]==0: continue

                cell += dfs(cx, cy)

            return cell


        cell_count = 0
        for x in range(len(grid)):
            for y in range(len(grid[0])):
                if grid[x][y]==1:
                    count = dfs(x, y)
                    if count!=inf:
                        cell_count+=count
        
        return cell_count

s = Solution()
# %%
s.numEnclaves([[0,0,0,0],[1,0,1,0],[0,1,1,0],[0,0,0,0]])
# %%
