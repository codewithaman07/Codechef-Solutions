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
    int n; cin>>n;
    vector<int>v(n);
    f(0,n) cin>>v[i];
    map<int,int>mp;
    f(0,n){
        mp[v[i]]++;
    }
    int maxi = 0;
    int freq = 1;
    for(auto x: mp){
        if(x.second>maxi && x.first != 0){
            maxi = x.second;
            freq = x.first;
        }
        
    }
    for(int i = 0; i<n; i++){
        if(v[i] == 0) v[i] = freq;
    }
    freq = 0;
    for(int i =0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(v[i] == v[j]){
                freq++;
            }
        }
    }
    cout<<freq<<endl;
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