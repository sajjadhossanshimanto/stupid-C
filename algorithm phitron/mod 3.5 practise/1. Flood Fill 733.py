from typing import List


move = [(0, 1), (0, -1), (1, 0), (-1, 0)]
class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        gx, gy = len(image), len(image[0])
        original_color = image[sr][sc]

        visit = [[0]*gy for _ in range(gx)]
        def dfs(x, y):
            visit[x][y] = 1
            image[x][y] = color

            for i, j in move:
                cx, cy = x+i, y+j
                if cx<0 or cy<0 or cx>=gx or cy>=gy or visit[cx][cy] or image[cx][cy]!=original_color:
                    continue
                
                dfs(cx, cy)
            
        dfs(sr, sc)
        return image

