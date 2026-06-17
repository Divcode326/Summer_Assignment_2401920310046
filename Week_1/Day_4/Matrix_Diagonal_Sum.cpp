class Solution:
    def diagonalSum(self, mat):
        n = len(mat)
        total = 0

        for i in range(n):
            total += mat[i][i]          # Primary diagonal
            total += mat[i][n - 1 - i]  # Secondary diagonal

        # If n is odd, the center element was added twice
        if n % 2 == 1:
            total -= mat[n // 2][n // 2]

        return total
