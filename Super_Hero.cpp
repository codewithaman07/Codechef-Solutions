#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
const int M = 1e9+7;
const int N = 1e6 + 1;

vector<int> prime(N + 1, 1), lp(N + 1, -1);

void initialize_sieve() {
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= N; i++) {
        if (prime[i]) {
            lp[i] = i;
            for (int j = i * 2; j <= N; j += i) {
                prime[j] = 0;
                if (lp[j] == -1) lp[j] = i;
            }
        }
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    while (n > 1) {
        n /= lp[n];
        ans++;
    }
    while (k > 1) {
        k /= 2;
        ans++;
    }
    
    cout << ans << endl;
}

signed main() {
    Aman();
    initialize_sieve();
    
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
