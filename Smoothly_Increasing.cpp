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

bool si(const vector<int> &v){
    if(v.size()<=1) return true;
    for(int i=0;i+1<v.size();i++){
        if(v[i]>=v[i+1]) return 0;
    }
    vector<int> d(v.size()-1);
    for(int i=0;i+1<v.size();i++){
        d[i]=v[i+1]-v[i];
    }
    return si(d);
}

void solve(){
    int n; cin>>n;
    vector<int>a(n),ans(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n>=32){
        for(int i = 0; i<n; i++) cout<<ans[i];
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        vector<int>temp; temp.reserve(n-1);
        for(int j=0;j<n;j++){
            if(j==i) continue;
            temp.pb(a[j]);
        }
        ans[i]=si(temp);
    }
    for(int i=0;i<n;i++) cout<<ans[i];
    cout<<endl;
}

signed main(){
    Aman();
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
