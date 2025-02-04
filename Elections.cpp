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
    vector<int>a(n), b(n);
    int cnt = 0;
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];
    vector<int>temp;
    for(int i = 0; i<n; i++){
        if(a[i]>b[i]) cnt++;
        else if(a[i]<=b[i]) temp.pb(b[i]-a[i]);
    }
    sort(all(temp));
    for(int i = 0; i<temp.size(); i++){
        if(x >= temp[i]+1){
            x -= temp[i]+1;
            cnt++;
        }
        else break;
    }
    if(cnt>n/2){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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