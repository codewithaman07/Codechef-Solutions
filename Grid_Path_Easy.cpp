#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

void solve() {
    int n,q; cin>>n>>q;
    string arr[2];
    for(int i = 0; i<2; i++) cin>>arr[i];
    vector<int>pos[2];
    for(int i=0; i<2; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] == '1') pos[i].pb(j);
        }
    }
    if(pos[0].size() == 0 || pos[1].size() == 0) {
        cout << -1 << endl;
        return;
    }
    vector<int>pre(n,-1), post(n,-1);
    pre[0] = pos[0][0];
    for(int i = 1; i<pos[0].size(); i++){
        pre[i] = pre[i-1]+pos[0][i]-i;
    }
    post[n-1] = n-1-pos[1][pos[1].size()-1];
    for(int i = n-2, j = pos[1].size()-2; j>=0; i--,j--){
        post[i] = post[i+1]+i-pos[1][j];
    }
    int ans = LLONG_MAX;
    for(int i = 0; i<n; i++){
        if(pre[i] != -1 && post[i] != -1){
            ans = min(ans, pre[i] + post[i]);
        }
    }
    if(ans == LLONG_MAX) cout << -1 << endl;
    else cout << ans << endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}