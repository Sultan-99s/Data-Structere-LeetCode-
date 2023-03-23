class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        pascal = []
        for i in range(1, numRows+1):
            newRow = [1]*i
            for j in range(1, i-1):
                newRow[j] = pascal[i-2][j] + pascal[i-2][j-1]
            pascal.append(newRow)
        return pascal
