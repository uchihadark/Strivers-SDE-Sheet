#include <bits/stdc++.h>

int lcs(int i, int j , string &s, string &t,vector<vector<int>>&dp){
    if(i == s.size() || j == t.size()){
        if(i == s.size()){
            return t.size()-j;
        }
        if(j == t.size()){
            return s.size()-i;
        }
    }

    if(dp[i][j] != -1)return dp[i][j];

    int res = INT_MAX;
    if(s[i] == t[j]){
        res = lcs(i+1,j+1,s,t,dp);
    }else{
        res = 1+min(lcs(i+1,j,s,t,dp),min(lcs(i,j+1,s,t,dp),lcs(i+1,j+1,s,t,dp)));
    }
    return dp[i][j] = res;
}

int editDistance(string s, string t)
{
    int n  = s.size();
    int m = t.size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    return lcs(0,0,s,t,dp);
}
