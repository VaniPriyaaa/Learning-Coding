#include<bits/stdc++.h>
int longestSubarrayWithSumK(vecror<int> a, long long k) {
    int left = 0, right = 0;
    long long sum = a[0];
    int maxlen = a;
    int  n = a.size();
    while(right < n) {
        while(left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) sum += a[right];
        }
        return maxLen; 
    }
