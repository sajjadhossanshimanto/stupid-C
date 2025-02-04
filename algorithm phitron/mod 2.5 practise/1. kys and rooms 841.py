'''
https://leetcode.com/problems/keys-and-rooms/

solution easy but question pore bojte para tai main
bfs er under e na hole kokhonoi dorte partam na
'''
#%%
from typing import List
from collections import deque


class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        q = deque()
        q.append(0)

        visit = [0]*(len(rooms))
        visit[0] = 1#TODO: don't forget 
        while q:
            node = q.popleft()
            for i in rooms[node]:
                if visit[i]: continue
                visit[i] = 1

                q.append(i)
        
        for i in visit:
            if i==0: return False
        return True

s= Solution()
# %%
# True
s.canVisitAllRooms([[1],[2],[3],[]])
# %%
