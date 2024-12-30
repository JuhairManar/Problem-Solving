# link- https://leetcode.com/problems/set-matrix-zeroes/description/

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n=len(matrix)
        m=len(matrix[0])

        should_fill_first_row=0 in matrix[0]
        should_fill_first_col=0 in [sub[0] for sub in matrix]

        for i in range(1,n):
            for j in range (1,m):
                if matrix[i][j]==0:
                    matrix[i][0]=matrix[0][j]=0

        for i in range(1,n):
            for j in range (1,m):
                if matrix[i][0]==0 or matrix[0][j]==0:
                    matrix[i][j]=0

        if should_fill_first_row:
            matrix[0]=[0]*m

        if should_fill_first_col:
            for row in matrix:
                row[0] = 0
        
