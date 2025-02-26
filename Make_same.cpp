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
    int n; 
    cin >> n;
    string a, b, c; 
    cin >> a >> b >> c;
    
    int z1 = count(a.begin(), a.end(), '0');
    int z2 = count(b.begin(), b.end(), '0');
    int z3 = count(c.begin(), c.end(), '0');
    
    int zero = z1 + z2 + z3;
    if(zero % n != 0) {
        cout << -1 <<endl;
        return;
    }
    
    int k = zero / n;
    if(k == 0 || k == 3) {
        cout << 0 <<endl;
        return;
    }
    
    int ans = INT_MAX;
    vector<int> zeros = {z1, z2, z3};
    
    for (int mask = 0; mask < (1 << 3); mask++) {
        if (__builtin_popcount(mask) == k) {
            int sum = 0;
            for (int i = 0; i < 3; i++) {
                if(mask & (1 << i)) {
                    sum += zeros[i];
                }
            }
            int cost = k * n - sum;
            ans = min(ans, cost);
        }
    }
    
    cout << ans << endl;
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
