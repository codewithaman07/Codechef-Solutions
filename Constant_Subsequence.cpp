#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x, n) for (int i = x; i < n; i++)
#define all(x) x.begin(), x.end()

bool pred(int m, int n, vector<int> pos, vector<int> neg) {
    int p = 0, minp = 0;
    reverse(all(pos));
    reverse(all(neg));
    
    for (int i = 0; i < n; i++) {
        if (!pos.empty()) {
            if (p + pos.back() - minp <= m) {
                p += pos.back();
                pos.pop_back();
            } else if (!neg.empty()) {
                p += neg.back();
                neg.pop_back();
                minp = min(minp, p);
            } 
            else return false;
        } 
        else if (!neg.empty()) {
            p += neg.back();
            neg.pop_back();
            minp = min(minp, p);
        } 
        else return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> pos, neg;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x >= 0) pos.pb(x);
        else neg.pb(x);
    }

    int l = 0, r = 1e15;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (pred(m, n, pos, neg)) r = m;
        else l = m + 1;
    }
    cout << l << endl;
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
