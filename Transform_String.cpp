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
    string s,t; cin>>s>>t;
    int n = s.size(), m = t.size();
    vector<int>freq1(26,0),freq2(26,0);
    for(auto i:s) freq1[i-'a']++;
    for(auto i:t) freq2[i-'a']++;
    for(int i = 0; i<n; i++){
        if(freq2[i] > freq1[i] && (cout<<-1<<endl)) return;
    }
    vector<int>temp;
    int pos = m-1;
    for(int i = n-1; i>=0 && pos>=0; i--){
        if(s[i] == t[pos]){
            temp.pb(i+1);
            pos--;
        }
    }
    if(pos>=0 && (cout<<-1<<endl)) return;
    reverse(all(temp));
    int x = 0;
    for(int num : temp) x+=num;
    int rem = n-m;
    cout<<(n*(n+1)/2) - x - (rem*(rem-1)/2)<<endl;
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

// 4 == 10
// n-m = 2 == 1
// 3+4
// so ans is 10-7-1
// 1 1 3  
// sum is affected as 1 2 3 4 r-1                                                                               