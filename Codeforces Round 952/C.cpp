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
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> prefix(n);
    prefix[0] = arr[0];

    for (ll i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    ll ans = 0, max_num = 0;
    for (ll i = 0; i < n; i++)
    {
        max_num = max(max_num, arr[i]);
        ans += (prefix[i] - max_num == max_num);
    }

    cout << ans << el;
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