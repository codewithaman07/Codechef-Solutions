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

bool fun(vector<int>&arr, vector<int>&brr, int i){
    int m = brr.size();
    for(int j = 0; j<m; j++){
        if(arr[i+j] == brr[j]) continue;
        return arr[i+j] > brr[j];
    }
    return 0;
}

void solve() {
    int n,m; cin>>n>>m;
    vector<int>arr(n), brr(m);
    for(int i = 0; i<n; i++) cin>>arr[i];
    for(int j = 0; j<m; j++) cin>>brr[j];
    reverse(all(brr));
    int mini = INT_MAX, k = 0;
    for(int i = 0; i<m; i++){
        if(brr[i] < mini){
            mini = brr[i];
            k = i;
        }
    }
    reverse(brr.begin(), brr.begin()+k+1);
    reverse(brr.begin()+k+1, brr.end());
    for(int i = 0; i<=n-m; i++){
        if(fun(arr, brr, i)){
            for(int j = 0; j<m; j++){
                arr[i+j] = brr[j];
            }
        }
    }
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
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