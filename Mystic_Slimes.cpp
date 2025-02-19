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
    int maxi = 0;
    if(n == 2){
        maxi = abs(arr[0]-arr[1]);
    }
    else if(n == 3){
        int a = max(arr[0], arr[2]);
        int m = max(0ll, arr[1]-arr[0]-arr[2]);
        maxi = max(a, m);
    }
    else{
        maxi = max(arr[0], arr[n-1]);
        maxi = max(maxi, max(0ll, arr[1]-arr[0]));
        maxi = max(maxi, max(0ll, arr[n-2]-arr[n-1]));
        for(int i = 2; i<=n-3; i++){
            maxi = max(maxi, arr[i]);
        }
    }
    
    cout<<maxi<<endl;
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