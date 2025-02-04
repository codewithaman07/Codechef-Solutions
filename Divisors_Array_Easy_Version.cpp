#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int MAX_A = 1e5;

// Function to calculate prime factors of numbers up to MAX_A using a sieve
vector<int> sieve(int max_n) {
    vector<int> spf(max_n + 1); // Smallest prime factor
    for (int i = 2; i <= max_n; i++) {
        spf[i] = i;
    }
    for (int i = 2; i * i <= max_n; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= max_n; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
    return spf;
}

// Function to factorize a number using the sieve
map<int, int> factorize(int x, const vector<int>& spf) {
    map<int, int> factors;
    while (x != 1) {
        factors[spf[x]]++;
        x /= spf[x];
    }
    return factors;
}

// Function to compute M! prime factorization
map<int, int> factorial_prime_factors(int M, const vector<int>& spf) {
    map<int, int> total_factors;
    for (int i = 2; i <= M; i++) {
        map<int, int> factors = factorize(i, spf);
        for (auto& [prime, count] : factors) {
            total_factors[prime] += count;
        }
    }
    return total_factors;
}

// Function to calculate number of divisors modulo MOD
int num_divisors(const map<int, int>& factors) {
    ll result = 1;
    for (auto& [prime, exponent] : factors) {
        result = result * (exponent + 1) % MOD;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Precompute smallest prime factors
    vector<int> spf = sieve(MAX_A);

    // Precompute the prime factors of M!
    map<int, int> mfactors = factorial_prime_factors(M, spf);

    // Process each element in the array
    vector<int> result(N);
    for (int i = 0; i < N; i++) {
        map<int, int> afactors = factorize(A[i], spf);
        // Combine factors of A[i] and M!
        for (auto& [prime, count] : mfactors) {
            afactors[prime] += count;
        }
        // Calculate the number of divisors
        result[i] = num_divisors(afactors);
    }

    // Output the results
    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}
