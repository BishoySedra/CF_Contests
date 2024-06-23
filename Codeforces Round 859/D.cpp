#include <bits/stdc++.h>

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
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n);
    forN(n)
    {
        cin >> arr[i];
    }

    vector<ll> prefix(n);
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    ll total = prefix[n - 1];
    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        l--;
        r--;

        ll tempSum;
        if (l == 0)
        {
            tempSum = prefix[r];
        }
        else
        {
            tempSum = prefix[r] - prefix[l - 1];
        }

        ll times = (r - l + 1);

        ll ans = (total - tempSum) + (times * k);

        if (ans & 1)
        {
            cout << "YES" << el;
            continue;
        }

        cout << "NO" << el;
    }
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
