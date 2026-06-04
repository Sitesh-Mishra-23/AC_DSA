class Solution {
public:
    bool isSafe(vector<string>&board,int row,int j,int n){
        for(int i=0;i<row;i++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row, k=j;i>=0 && k>=0;i--,k--){
            if(board[i][k]=='Q'){
                return false;
            }
        }
        for(int i=row, k=j;i>=0 && k<n;i--,k++){
            if(board[i][k]=='Q'){
                return false;
            }
        }

        return true;
    }
    void nQueens(vector<string>&board,int row,int n,vector<vector<string>>&ans){
        if(row==n){
            ans.push_back(board);
            return;
        }

        for(int j=0;j<n;j++){
            if(isSafe(board,row,j,n)){
                board[row][j]='Q';
                nQueens(board,row+1,n,ans);
                board[row][j]='.';
            }

        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;

        nQueens(board,0,n,ans);
        return ans;
    }
};