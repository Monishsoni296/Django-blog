#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;

void solve() {
    cin>>n;
    vector<int>a(n);
    for(auto &i:a) cin>>i;

    vector<int>dp(n+1, 0);
    dp[0]=1;
    for(int i=1; i<=n; i++) {
        if(a[i-1]+i<=n && dp[i-1]) dp[i+a[i-1]]=1;
        if(i-a[i-1]-1>=0 && dp[i-a[i-1]-1]) dp[i]=1;
    }
    cout << (dp[n] ? "YES" : "NO") << '\n';
}

int32_t main() {
    int t;
    cin>>t;
    while(t--) solve();
}