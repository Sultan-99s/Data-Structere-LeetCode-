class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int n = -1;
        for(int i=0; i<row; i++){
            if(matrix[i][col-1] >= target && matrix[i][0] <= target){
                n = i;
                break;
            }
        }
        if(n == -1)
            return false;

        for(int i=0; i<col; i++){
            if(matrix[n][i] == target)
                return true;
        }
        return false;
    }
};
