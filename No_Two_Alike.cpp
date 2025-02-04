#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    map<int,pair<int,int>>mp;
    for(int i = 0; i<n; i++){
        if(mp.find(a[i]) == mp.end()){
            mp[a[i]] = {i, i};
        }
        else mp[a[i]].second = i;
    }
    vector<pair<int,int>>vec;
    for(auto &[x,y] : mp){
        if(y.first != y.second) vec.pb(y);
    }
    sort(all(vec));
    int ans = 0, l = -1, r = -1;
    set<int>st;
    for( auto &[x,y] : vec){
        if(x > r){
            ans+=st.size();
            st.clear();
            l = x;
            r = y;
        }
        else r = max(r, y);
        for(int i = x; i<=y; i++){
            st.insert(a[i]);
        }
    }
    ans+=st.size();
    cout<<ans<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}