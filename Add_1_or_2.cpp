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

bool fun(vector<int>& arr, vector<int>& brr, int t) {
    int n = arr.size(), tot = 0;
    for (int i = 0; i < n; i++) tot += brr[i];
    vector<int> x(n);
    int sum_x = 0;
    for (int i = 0; i<n; i++) {
        if (t < arr[i]) return 0;
        x[i] = min(brr[i], t - arr[i]);
        sum_x += x[i];
    }

    int temp = tot - sum_x;
    int cap = 0;
    for (int i = 0; i < n; i++) {
        int rem = t - (arr[i] + x[i]);
        if (rem > 0) cap += rem / 2;
    }
    return cap >= temp;
}

void solve() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    int low = *max_element(all(A));
    int sum = accumulate(all(B), 0LL);
    int high = INT_MAX;
    int ans = high;

    while (low <= high) {
        int mid = low + ((high - low) >> 1);
        if (fun(A, B, mid)) {
            ans = mid;
            high = mid - 1;
        } 
        else low = mid + 1;
    }

    cout << ans << endl;
}

signed main() {
    Aman();
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
