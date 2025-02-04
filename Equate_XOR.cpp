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
    vector<int>a(n), pre(n+1, 0), ans(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    map<int,int>last;
    for(int i = 1; i<=n; i++){
        pre[i] = pre[i-1]^a[i-1];
    }
    for(int i = 0; i<n; i++){
        if(last.find(pre[i+1]) != last.end()){
            ans[i] = ans[last[pre[i+1]]] + a[i];
        }
        else ans[i] = a[i];
        last[pre[i]] = i;
    }
    cout<<*max_element(all(ans))<<endl;
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