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
    f(0,n) cin>>arr[i];
    if(n == 1){
        cout<< (arr[0] == k ? 0 : 1)<<endl;
        return;
    }
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == k) continue;
        cnt++;
        while(i< n-1 && arr[i] == arr[i+1]) i++;
        int f = 0;
        while(i<n && __gcd(arr[i], k) == k) i++, f = 1;
        if(i<n && f) cnt++;
        
    }
    cout<< (cnt >=2 ? 2 : cnt)<<endl;
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