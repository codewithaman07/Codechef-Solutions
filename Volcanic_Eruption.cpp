#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e10;


void solve() {
    int n,p; cin>>n>>p;
    vector<int>arr(n), left(n, N), right(n, N);
    for(int i = 0; i<n; i++) cin>>arr[i];
    int h = N;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            h = 0;
            left[i] = 0;
        }
        if(arr[i] < h) left[i] = h;
        else{
            left[i] = arr[i];
            h = arr[i];
        }
    }
    for(int i = n-1; i>=0; i--){
        if(arr[i] == 0){
            h = 0;
            right[i] = 0;
        }
        if(arr[i] < h) right[i] = h;
        else{
            right[i] = arr[i];
            h = arr[i];
        }
    }
    for(int i = 0; i<n; i++){
        cout<< (min(left[i], right[i])+p-1)/p << " ";
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