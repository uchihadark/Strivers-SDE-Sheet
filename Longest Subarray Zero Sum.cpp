#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  map<int,int>ind;
  int ans = 0;

  int curSum = 0;
  for(int i= 0;i<arr.size();i++){
    curSum += arr[i];
    if(curSum == 0){
      ans = max(ans,i+1);
      continue;
    }
    int req = curSum;
    if(ind.count(req)){
      ans = max(ans,i-ind[req]);
    }
    if(ind.count(curSum) == false){
      ind[curSum] = i;
    }
  }
  return ans;

}
