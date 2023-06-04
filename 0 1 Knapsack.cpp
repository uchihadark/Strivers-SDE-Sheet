#include <bits/stdc++.h>

int profit(int i,int w,vector<int>&values,vector<int>&weights,
vector<vector<int>>&dp){
	if(i == 0 || w == 0)return 0;

	if(dp[i][w] != -1)return dp[i][w];

	int op1 = 0, op2 = 0;
	if(weights[i-1] <= w){
		op1 = profit(i-1,w-weights[i-1],values,weights,dp)+values[i-1];
	}
	op2 = profit(i-1,w,values,weights,dp);
	int res = max(op1,op2);
	return dp[i][w] = res;
}

int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
	return profit(n,w,values,weights,dp);
}
