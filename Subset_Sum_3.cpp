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
    vector<int>arr(3, 0);
    for(int i = 0; i<n; i++){
        int num; cin>>num;
        arr[num%3]++;
    }
    bool f = 0;
    if(arr[0]>0) f = 1;
    else if(arr[2]>0 && arr[1]>0) f = 1;
    else if(arr[1]>=3 || arr[2]>=3) f = 1;

    if(f) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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