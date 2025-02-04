#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n; cin>>n;
    vector<pair<int,int>>a;
    f(0,n){
        int x; cin>>x;
        a.pb({x,i});
    }
    sort(all(a));
    int l = 1, r = 1e6;
    int y = 0;
    for(int i = 0; i<n; i++){
        if(a[i].second == 0){
            y = a[i].first;
            if(i>0){
                int x = a[i-1].first;
                l = max(l, (x+y+1)/2);
            }
            if(i<n-1){
                int x = a[i+1].first;
                r = min(r, (x+y)/2);
            }
            break;
        }
    }
    int ans = max(0LL, r-l+1);
    cout<<ans<<endl;
}

signed main() {
    fastio();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}