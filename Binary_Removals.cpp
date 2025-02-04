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
    int n,x,k; cin>>n>>x>>k;
    string s; cin>>s;
    int inv = 0, zero = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '0') zero++;
    }
    for(int i = 0; i<n; i++){
        if(s[i] == '1') inv+=zero;
        else zero--;
    }
    if(inv%k == 0 && inv <= x) cout<<1<<endl;
    else cout<<2<<endl;
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