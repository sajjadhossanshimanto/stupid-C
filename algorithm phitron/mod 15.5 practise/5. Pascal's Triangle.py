# https://leetcode.com/problems/pascals-triangle/description/

#%%
from typing import List


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        triangle = [[1]]
        if numRows==1: return triangle
        triangle.append([1, 1])
        if numRows==2: return triangle


        for r in range(2, numRows):
            l = [1]
            for i in range(1, r):# r is already 1 minused
                l.append(triangle[-1][i] + triangle[-1][i-1])
            l.append(1)
            triangle.append(l)
        
        return triangle

s = Solution()
# %% test with cp helper
# print(s.generate(int(input())))
# %%
s.generate(5)

# %%
