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
    int n,c; cin>>n>>c;
    vector<int>arr(n), brr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    for(int i = 0; i<n; i++) cin>>brr[i];
    map<int,int>mp;
    for(int i = 0; i<n; i++){
        if(mp.count(arr[i])){
            mp[arr[i]] = min(mp[arr[i]], brr[i]);
        }
        else mp[arr[i]] = brr[i];
    }
    int ans = 0;
    for(auto &[x,y] : mp){
        int num = max(0ll,c-y);
        ans+=num;
    }
    cout<<ans<<endl;
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