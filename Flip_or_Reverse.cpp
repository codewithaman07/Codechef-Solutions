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
    string a,b; cin>>a>>b;
    if(a == b && cout<<0<<endl) return;
    vector<pair<int,int>>temp;
    for(int i = 0; i<n; i++){
        if(a[i] != b[i]){
            int l = i+1;
            while(i+1<n && a[i+1] != b[i+1]) i++;
            int r = i+1;
            temp.pb({l,r});
        }
    }
    cout<<temp.size()<<endl;
    for(auto &[x,y]: temp){
        cout<<1<<" "<<x<<" "<<y<<endl;
    }
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