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
    vector<int>arr(n), brr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    for(int i = 0; i<n; i++) cin>>brr[i];
    for(int i = 0; i<n; i++){
        int p = arr[i];
        vector<pair<int,int>>temp;
        for(int j = 0; j<n; j++){
            temp.pb({abs(p-arr[j]), arr[j]});
        }
        sort(all(temp));
        int f = 1;
        for(int j = 0; j<n; j++){
            if(temp[j].second != brr[j]){
                f = 0;
                break;
            }
        }
        if(f){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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