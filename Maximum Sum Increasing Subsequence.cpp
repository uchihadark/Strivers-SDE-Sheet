#include <bits/stdc++.h> 
int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
	vector<int>dp(n);
	int ans = INT_MIN;
	for(int i= 0;i<n;i++){
		dp[i] = rack[i];
		for(int j = 0;j<i;j++){
			if(rack[j] < rack[i]){
				dp[i] = max(dp[i],rack[i]+dp[j]);
			}
		}
		ans = max(ans,dp[i]);

	}
	return ans;
}
