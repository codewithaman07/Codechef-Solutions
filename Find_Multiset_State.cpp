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
    deque<int> dq;
    int n,k; cin>>n>>k;
    f(0,n){
        int x; cin>>x;
        dq.pb(x);
    }
    while(k--){
        int fi = dq.front();
        dq.pop_front();
        int li = dq.back();
        dq.pop_back();
        int temp = fi+li;
        dq.pb(temp);
    }
    for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;
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