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
    vector<int>arr(n), pre(n+1, 0);
    for(int i = 0; i<n; i++) cin>>arr[i];
    sort(all(arr));
    for(int i = 1; i<=n; i++) pre[i] = pre[i-1]+arr[i-1];
    int maxi = INT_MIN;
    for(int i = 0; i<=n; i++){
        int temp = (i)*(i);
        maxi = max(maxi, temp+pre[n]-pre[i]);
    }
    cout<<maxi<<endl;
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