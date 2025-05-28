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
    int n; cin>>n;
    string s; cin>>s;
    map<int, pair<int,int>>mp;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'A') cnt++;
        else if(s[i] == 'B') mp[i].first = cnt;
        else cnt = 0;
    }
    cnt = 0;
    for(int i = n-1; i>=0; i--){
        if(s[i] == 'C') cnt++;
        else if(s[i] == 'B') mp[i].second = cnt;
        else cnt = 0;
    }
    int ans = 0;
    for(auto [x,y] : mp){
        ans+= max(y.first, y.second);
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