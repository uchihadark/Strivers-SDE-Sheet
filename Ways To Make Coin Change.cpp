#include <bits/stdc++.h>

long long ways(int value,int n, int *deno,vector<vector<long long>>&dp){
    if(n == 0)return 0;
    if(value == 0)return 1LL;

    if(dp[n][value] != -1)return dp[n][value];
    long long op1 = 0, op2 = 0;
    if(deno[n-1] <= value){
        op1 = ways(value-deno[n-1],n,deno,dp);
    }
    op2 = ways(value,n-1,deno,dp);
    long long res = op1 + op2; 
    return dp[n][value] = res;

}

long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long long>>dp(n+1,vector<long long>(value+1,-1));
    return ways(value,n,denominations,dp);
}
