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

bool fun(string s) {
    int n = s.size();
    for(int i=0; i<n-1; i++) {
        if(s[i] == s[i+1]) return false;
    }
    return true;
}

void solve() {
    string s; cin>>s;
    int a = 0, b = 0, n = s.size();
    for(int i = 0; i<n; i++){
        if(s[i] == '0') a++;
        else b++;
    }
    if(a == b || abs(a-b) == 1){
        if(fun(s)) cout<<0<<endl;
        else cout<<1<<endl;
    }
    else{
        int cnt = abs(a-b);
        cnt/=2;
        if(cnt == 1) cout<<2<<endl;
        else cout<<3<<endl;
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