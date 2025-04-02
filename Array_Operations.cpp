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
    if(n == 1){
        cout<<arr[0]<<endl;
        return;
    }
    int maxi = *max_element(all(arr));
    int temp = (n-1)/2;
    int idx = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == maxi && (i%2 == 0)){
            idx = 1;
            break;
        }
    }
    if(idx) maxi+=temp;
    else maxi+=temp-1;
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