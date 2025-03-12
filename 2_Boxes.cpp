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
    int a,b,k; cin>>a>>b>>k;
    int num = abs(a-b);
    if(num == k){
        cout<<0<<endl;
        return;
    }
    int mini = min(num,k);
    int maxi = max(num,k);
    int ans = 0;
    while(maxi>mini){
        ans++;
        mini+=2;
    }
    if(mini == maxi) cout<<ans<<endl;
    else cout<<-1<<endl;
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