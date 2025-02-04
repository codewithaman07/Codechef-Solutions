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

vector<int> findCycles(const vector<int>& P) {
    int n = P.size();
    vector<int> visited(n, 0);
    vector<int> cycleLengths;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int length = 0;
            int current = i;
            while (!visited[current]) {
                visited[current] = 1;
                current = P[current] - 1;
                ++length;
            }
            cycleLengths.push_back(length);
        }
    }
    return cycleLengths;
}

void solve() {
    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }
    vector<int> cycleLengths = findCycles(P);
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int length : cycleLengths) {
        minHeap.push(length);
    }

    long long totalCost = 0;
    while (minHeap.size() > 1) {
        int a = minHeap.top();
        minHeap.pop();
        int b = minHeap.top();
        minHeap.pop();

        totalCost += a + b;
        minHeap.push(a + b);
    }

    cout << totalCost << '\n';
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
