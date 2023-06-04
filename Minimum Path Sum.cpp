#include <bits/stdc++.h> 


int path(int i, int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
    if(i == 0 && j == 0)return grid[i][j];

    if(dp[i][j] != -1)return dp[i][j];

    int op1 = INT_MAX, op2 = INT_MAX;
    if(i-1 >= 0){
        op1 = grid[i][j] + path(i-1,j,grid,dp);
    }
    if(j-1 >= 0){
        op2 = grid[i][j] + path(i,j-1,grid,dp);
    }

    int res = min(op1,op2);
    return dp[i][j] = res;
}

int minSumPath(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>>dp(n,vector<int>(m,-1));

    return path(n-1,m-1,grid,dp);

}
