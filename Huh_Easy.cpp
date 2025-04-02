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
const int N = 1e6 + 1;

void solve() {
    int n,k; cin>>n>>k;
    if(n == 1){
        if(k == 0){
            cout<<"A"<<endl;
            cout<<"B"<<endl;
        }
        else if(k == 1){
            cout<<"A"<<endl;
            cout<<"A"<<endl;
        }
        else cout<<-1<<endl;
        return;
    }
    if(k<n/2){
        cout<<-1<<endl;
        return;
    }
    string s;
    int f = 1;
    for(int i = 0; i<n; i++){
        if(f){
            s+="A";
            f = 0;
        }
        else{
            s+="B";
            f = 1;
        }
    }
    int temp = n-k, j = 0;
    string t = s;
    for(int i = 0; i<n && j<temp; i+=2){
        t[i] = 'C';
        j++;
    }
    cout<<s<<endl;
    cout<<t<<endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}