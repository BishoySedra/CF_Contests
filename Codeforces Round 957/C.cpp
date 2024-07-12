#include <bits/stdc++.h>
#include <bitset>

#define boost ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define el "\n"
#define ll long long
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & ~(1 << k))
#define isOn(n, k) ((n >> k) & 1)
#define isPowerOfTwo(n) (n && !(n & (n - 1)))
#define file                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout)
#define interval(arr) arr.begin(), arr.end()
#define forN(n) for (int i = 0; i < n; i++)

using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    map<ll, bool> visited;
    cout << n << " ";
    visited[n] = true;

    ll start = n - 1;
    for (ll i = start; i > m; i--)
    {
        cout << i << " ";
        visited[i] = true;
    }

    for (ll i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cout << i << " ";
        }
    }

    cout << el;
}

int main()
{
    // file; // Uncomment if using input/output files
    boost;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}