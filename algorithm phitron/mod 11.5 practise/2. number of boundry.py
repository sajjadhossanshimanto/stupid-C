# https://leetcode.com/problems/number-of-enclaves/description/

#%%
from typing import List


move = [(0, 1), (0, -1), (1, 0), (-1, 0)]

class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        gx, gy = len(grid), len(grid[0])

        def dfs(x, y):
            grid[x][y] = 0

            cell = 1
            edge_touched = True
            for cx, cy in move:
                cx, cy = x+cx, y+cy
                if cx<0 or cy<0 or cx>=gx or cy>=gy: 
                    edge_touched = True
                    continue
                if grid[cx][cy]==0: continue

                count, edge_touched = dfs(cx, cy)
                cell += count

            return cell, edge_touched 


        cell_count = 0
        for x in range(len(grid)):
            for y in range(len(grid[0])):
                if grid[x][y]==1:
                    count, edge = dfs(x, y)
                    if not edge:
                        cell_count+=count
        
        return cell_count