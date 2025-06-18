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
    int n; cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int prev = -1, f = 1;
            for(int k = i; k<=j; k++){
                int num = (arr[k]-1)/2;
                if(prev+1 <= num) prev++;
                else if(arr[k]>prev) prev = arr[k];
                else{
                    f = 0;
                    break;
                }
            }
            if(f) ans++;
        }
    }
    cout<<ans<<endl;
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