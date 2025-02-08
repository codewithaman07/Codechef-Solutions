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
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    vector<int>l(n, 1), r(n, 1);
    int ans = 1, cnt = 1;
    for(int i = 1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            l[i] = l[i-1] + 1;
            cnt++;
        }
        else{
            l[i] = 1;
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    for(int i = n-2; i>=0; i--){
        if(arr[i] <= arr[i+1]) r[i] = r[i+1]+1;
        else r[i] = 1;
    }

    for(int i = 0; i<n; i++){
        int temp = arr[i]*x;
        int xi = 0, y = 0;
        if(i>0 && temp >= arr[i-1]) xi = l[i-1];
        if(i<n-1 && temp <= arr[i+1]) y = r[i+1];
        ans = max(ans, xi+y+1);
    }
    cout<<ans<<endl;
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