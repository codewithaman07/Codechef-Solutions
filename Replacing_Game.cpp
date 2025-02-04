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
    string a,b; cin>>a>>b;
    if(a == b){
        cout<<0<<endl;
        return;
    }
    int c = 1, j = -1;
    f(1,n){
        if(b[i] == b[i-1]){
            c++;
        }
        else c = 1;
        if(c == k){
            j = i-k+1;
            break;
        }
    }
    if(j == -1){
        cout<<-1<<endl;
        return;
    }
    vector<pair<int,char>>ans;
    f(0,j){
        ans.pb({i+1,b[i]});
    }
    for(int i = n-1; i>=k+j; i--){
        ans.pb({i-k+2,b[i]});
    }
    ans.pb({j+1,b[j]});
    cout<<ans.size()<<endl;
    for(auto [i, ch]: ans){
        cout<<i<<" "<<ch<<endl;
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