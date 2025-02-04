#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n,k; cin>>n>>k;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        arr[i] = x;
        mp[x]++;
    }
    int num = mp[k], maxi = 0;
    for(int i = 0; i<n; i++){
        maxi = max(maxi,mp[arr[i]]);
    }
    if(maxi == num){
        cout<<0<<endl;
        return;
    }
    map<int,int>pre, suf;
    int prem = 0, sufm = 0;
    for(int i = 0; i<n; i++){
        pre[arr[i]]++;
        prem = max(prem,pre[arr[i]]);
        if(arr[i] == k && prem == pre[k]){
            cout<<1<<endl;
            return;
        }
    }
    for(int i = n-1; i>=0; i--){
        suf[arr[i]]++;
        sufm = max(sufm,suf[arr[i]]);
        if(arr[i] == k && sufm == suf[k]){
            cout<<1<<endl;
            return;
        }
    }
    cout<<2<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}