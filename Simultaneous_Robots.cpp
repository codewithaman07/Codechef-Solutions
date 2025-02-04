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

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string>g(n);
    for (int i = 0; i < n; i++) cin>>g[i];
    if((g[0][1] == '#' || g[1][0] == '#' || g[n-1][m-2] == '#' || g[n-2][m-1] == '#') && (cout << -1 << endl)) return;
    vector<vector<int>>dist(n, vector<int>(m, -1));  

    auto bfs = [&](int i, int y, vector<vector<int>>&arr){
        queue<pair<int, int>>q;
        q.push({i, y});
        arr[i][y] = 0;
        while(!q.empty()){
            auto [x, y] = q.front();
            q.pop();
            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 && nx < n && ny >= 0 && ny < m && g[nx][ny] == '.' && arr[nx][ny] == -1){
                    arr[nx][ny] = arr[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    };
    auto dist2 = dist;
    bfs(0, 0, dist);
    int tdist = dist[n-1][m-1];
    if(tdist == -1 && (cout << -1 << endl)) return;
    bfs(n-1, m-1, dist2);
    map<int,int>mp;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if((i == 0 && j == 0) || (i == n-1 && j == m-1)) continue;
            if(dist[i][j]+dist2[i][j] == tdist) mp[dist[i][j]]++;
        }
    }
    for(int i = 1; i<tdist; i++){
        if((mp[i]<=1) && (cout<<tdist+2<<endl)) return;
    }
    cout<<tdist<<endl;
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