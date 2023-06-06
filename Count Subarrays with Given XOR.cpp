#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    map<int,int> cnt;
    int curXor;
    int ans = 0;
    cnt[0]++;
    for(int i=0;i<arr.size();i++){
        if(i == 0){
            curXor = arr[i];
        }else{
            curXor ^= arr[i];
        }
        int req = x^curXor;
        if(cnt.count(req)){
            ans += cnt[req];
        }
        cnt[curXor]++;
    }
    return ans;
}
