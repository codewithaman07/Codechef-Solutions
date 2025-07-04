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
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    if(n == 2){
        cout<<"1 2"<<endl;
        return;
    }
    if(n == 3){
        cout<<"2 1 3"<<endl;
        return;
    }
    if(n == 4 && (cout<<"2 1 3 4"<<endl)) return;
    vector<int>arr = {2,1,3};
    for(int i = 5; i<=n; i+=2){
        arr.pb(i);
        arr.pb(i-1);
    }
    if(n%2 == 0) arr.pb(n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
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