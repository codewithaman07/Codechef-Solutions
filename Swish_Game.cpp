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
    int m,k; cin>>m>>k;
    string str; cin>>str;
    int s = 0, l = 0;
    for(int i = 0; i<m; i++){
        if(str[i] == 'S'){
            s++;
            l = i;
        }
    }
    if(s>=k && cout<<m<<endl) return;
    int temp = k-s;
    cout<<m-1+temp<<endl;
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