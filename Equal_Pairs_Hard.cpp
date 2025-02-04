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

int func(int n){
    return n*(n-1)/2;
}

void solve() {
    int n; cin>>n;
    vector<int>freq(n+1,0);
    int sum = 0, maxi = 0, c0 = n;
    while(n--){
        int x,y; cin>>x>>y;
        int f = freq[y];
        freq[y]++;
        sum += f;
        maxi = max(maxi,freq[y]);
        c0--;
        int ans = sum - func(maxi)+func(maxi+c0);
        cout<<ans<<" ";
    }
    cout<<endl;
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