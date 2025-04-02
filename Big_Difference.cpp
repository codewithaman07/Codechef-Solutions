#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int M = 1e9+7;
const int N = 1e6+1;
 
void solve(){
    int n, K; cin >> n >> K;
    for(auto a : {n, n-1}){
        if(a < 1) continue;
        int start = (a % 2 == 0 ? 1 : 2);
        for(int b = start; b <= a - K; b += 2){
            int g = gcd(a, b), L = (a/g)*b;
            if(L - g >= 2*K){
                cout << a << " " << b << "\n";
                return;
            }
        }
    }
    cout << "-1 -1\n";
}
 
signed main(){
    cout << fixed << setprecision(20);
    Aman();
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}
