# https://leetcode.com/problems/find-if-path-exists-in-graph/description/
#%%
from typing import List


class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        graph = [[] for _ in range(n+1)]
        for a, b in edges:
            graph[a].append(b)
            graph[b].append(a)

        visit = [0]*(n+1)
        def dfs(node):
            visit[node] = 1
            if node==destination: return 

            for i in graph[node]:
                if not visit[i]:
                    dfs(i)
        
        dfs(source)
        return bool(visit[destination])
        # return visit

s = Solution()
#%%
s=''
for i in (
    [[0,1],[0,2],[3,5],[5,4],[4,3]]
):
    s+=" ".join(map(str, i))+"\n"
print(s)
# %%
s.validPath( n = 6, edges = [[0,1],[0,2],[3,5],[5,4],[4,3]], source = 0, destination = 5)
# %%
