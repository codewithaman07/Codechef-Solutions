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
    int n,x; cin>>n>>x;
    int temp = 0, odd = 0, even = 0;
    if(x&1) temp = 1;
    for(int i = 1; i<=n; i++){
        if(i&1 && i!=x) odd++;
        if(i%2 == 0 && i!=x) even++;
    }
    if(temp){
        cout<<odd<<endl;
    }
    else{
        cout<<even<<endl;
    }
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