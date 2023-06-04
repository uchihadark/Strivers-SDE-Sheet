#include <bits/stdc++.h>

int longestIncreasingSubsequence(int arr[], int n)
{

    vector<int>lis;
    for(int i= 0;i<n;i++){
        auto it = lower_bound(lis.begin(),lis.end(),arr[i]);
        if(it == lis.end()){
            lis.push_back(arr[i]);
        }else{
            int ind = it - lis.begin();
            lis[ind] = arr[i];
        }
    }
    return lis.size();
}
