class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> row(9), col(9), grid(9);

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    int a = board[i][j];
                    int b = (i/3)*3 + j/3;
                    if(!row[i].emplace(a).second) return false;
                    if(!col[j].emplace(a).second) return false;
                    if(!grid[b].emplace(a).second) return false;
                }
            }
        }
        return true;
    }
};
