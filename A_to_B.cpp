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

int fun(vector<int>&arr, int k){
    int x = arr[2]/k + (arr[2]%k != 0);
    int temp = x-1;
    int y = arr[1];
    int z = arr[0];
    int num = 0;
    if(temp > y+z){
        num = temp-y-z;
        if(num&1) num++;
    }
    return arr[0]+arr[1]+arr[2]+num;
}

void solve() {
    int x1,x2,y1,y2,z1,z2,k;
    cin>>x1>>y1>>z1>>x2>>y2>>z2>>k;
    int x = abs(x1-x2);
    int y = abs(y1-y2);
    int z = abs(z1-z2);
    vector<int>temp(3);
    temp[0] = x;
    temp[1] = y;
    temp[2] = z;
    sort(all(temp));
    cout<<fun(temp,k)<<endl;
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