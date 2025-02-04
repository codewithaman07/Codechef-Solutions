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
    vector<pair<int,int>>arr;
    for(int i = 1; i<=n; i++){
        int x; cin>>x;
        arr.pb({x,i});
    }
    sort(all(arr), greater<pair<int,int>>());
    int cnt = 0;
    for(int i = 0; i<n-1; i++){
        if(abs(arr[i].second - arr[i+1].second) == 1) cnt++;
    }
    cout<<n-cnt<<endl;
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
