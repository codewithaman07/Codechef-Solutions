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
    int n; cin>>n;
    string s; cin>>s;
    int c0 = 0, c1 = 0;
    for(int i = 0; i<n-1; i++){
        if(s.substr(i,2) == "00") c0++;
        if(s.substr(i,2) == "11") c1++;
    }
    if(c0 == 0 && c1 == 0) cout<<"Yes"<<endl;
    else if(c0>= 2 || c1>=2) cout<<"No"<<endl;
    else{
        if(c0 == 1 && c1 == 1) cout<<"Yes"<<endl;
        else if(c1 == 1){
            if(s[0] == '0' || s[n-1] == '0') cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(c0 == 1){
            if(s[0] == '1' || s[n-1] == '1') cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
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