#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
const int M = 1e9+7;
const int N = 1e6 + 1;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    int sum = 0, ans = 0;
    for(int i = 0; i<n; i++){
        sum+=a[i];
        ans+=abs(sum);
    }
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
