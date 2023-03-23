class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i=0; i<numRows; i++){
            vector<int>newRow(i+1, 1);
            for(int j=1; j<i; j++){
                newRow[j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
            pascal.push_back(newRow);
        }
        return pascal;
    }
};
