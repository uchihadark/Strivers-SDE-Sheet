#include <bits/stdc++.h>

int lcsHelper(int i, int j, string &s, string &t, vector<vector<int>>&dp){
	if(i == s.size() || j == t.size())return 0;

	if(dp[i][j] != -1)return dp[i][j];

	int res = 0;
	if(s[i] == t[j]){
		res = 1 + lcsHelper(i+1, j+1, s, t, dp);
	}else {
		res = max(lcsHelper(i+1, j, s, t, dp),lcsHelper(i, j+1, s, t, dp));
	}
	dp[i][j] = res;
	return dp[i][j];
}

int lcs(string s, string t)
{
	int n = s.size();
	int m = t.size();
	vector<vector<int>>dp(n,vector<int>(m,-1));
	return lcsHelper(0, 0, s, t, dp);
}
