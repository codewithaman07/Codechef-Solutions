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
    vector<vector<int>> ans(n,vector<int>(n,0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            ans[i][j] = (i+j)%n + 1;
        }
    }
    int num = (n+1)/2;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(ans[i][j] == num) cout<<n<<" ";
            else if(ans[i][j] == n) cout<<num<<" ";
            else cout<<ans[i][j]<<" ";
        }
        cout<<endl;
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

// #include <bits/stdc++.h>
// using namespace std;

// #define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define endl '\n'
// #define int long long
// #define pb push_back
// #define f(x,n) for(int i = x ; i<n ; i++)
// #define all(x) x.begin(),x.end()
// const int M = 1e9+7;
// const int N = 1e6 + 1;

// vector<vector<int>> generateGrid(int n) {
//     vector<vector<int>> magic(n, vector<int>(n, 0));
//     int x = 0, y = n / 2;

//     for (int num = 1; num <= n * n; ++num) {
//         magic[x][y] = num;
//         int new_x = (x - 1 + n) % n;
//         int new_y = (y + 1) % n;
//         if (magic[new_x][new_y] != 0) {
//             new_x = (x + 1) % n;
//             new_y = y;
//         }
//         x = new_x;
//         y = new_y;
//     }

//     vector<vector<int>> grid(n, vector<int>(n));
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             grid[i][j] = ((magic[i][j] - 1) % n) + 1;
//         }
//     }

//     return grid;
// }

// void solve() {
//     int n;
//     cin >> n;

//     vector<vector<int>> grid = generateGrid(n);

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cout << grid[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// signed main() {
//     Aman();

//     int tc = 1;
//     cin >> tc;
//     while (tc--) {
//         solve();
//     }
//     return 0;
// }
