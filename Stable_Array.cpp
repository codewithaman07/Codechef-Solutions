#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n; cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    int maxi = INT_MIN, maxi2 = INT_MIN, temp = 0;
    for(int i = n-1; i>=0; i--){
        if(arr[i]>=maxi2){
            maxi2 = arr[i];
            maxi = max(maxi, temp);
            temp = 0;
        }
        else temp++;
    }
    maxi = max(maxi, temp);
    cout<<maxi<<endl;
}

signed main() {

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}