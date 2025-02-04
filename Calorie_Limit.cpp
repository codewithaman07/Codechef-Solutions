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
    vector<int>a(n);
    f(0,n) cin>>a[i];
    int cnt = 0, sum = 0;
    for(int i = 0; i<n; i++){
        if(sum+a[i]<=x){
            sum+=a[i];
            cnt++;
        }
        else break;
    }
    cout<<cnt<<endl;
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