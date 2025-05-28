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
    int n,k; cin>>n>>k;
    vector<int>arr(n), brr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    for(int i = 0; i<n; i++) cin>>brr[i];
    vector<tuple<int,int,int>>vec;
    for(int i = 0; i<n; i++){
        vec.pb({arr[i], brr[i], i});
    }
    sort(vec.begin(), vec.end());
    vector<int>ans(n,0);
    int sum = 0;
    // for(auto [a,b,i] : vec) cout<<a<<" "<<b<<" "<<i<<" ";
    // cout<<endl;
    priority_queue<int, vector<int>, greater<int>>pq;
    for(auto [a,b,i] : vec){
        ans[i] = sum;
        pq.push(b);
        sum+=b;
        if(pq.size()>k){
            sum-=pq.top();
            pq.pop();
        }
    }
    for(int i = 0; i<n; i++) cout<<ans[i]<<" ";
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