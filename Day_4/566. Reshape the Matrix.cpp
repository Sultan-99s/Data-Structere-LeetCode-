class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(), n=mat[0].size();

        if(m*n != r*c) return mat;

        vector<vector<int>>new_mat(r, vector<int>(c));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int row = (i*n+j)/c;
                int col = (i*n+j)%c;
                new_mat[row][col] = mat[i][j];
            }
        }
        return new_mat;
    }
};
