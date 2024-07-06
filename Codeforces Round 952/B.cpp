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

ll getMinDivisor(ll number)
{
    for (ll i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return i;
        }
    }

    return number;
}

void solve()
{
    ll number;
    cin >> number;

    ll minDivisor = getMinDivisor(number);

    ll start = 2;

    ll total = 0, maxTotal = 0, maxX = 0;
    for (ll i = start; i <= minDivisor; i++)
    {

        total = 0;

        for (ll j = i; j <= number; j += i)
        {
            total += j;
        }

        if (total > maxTotal)
        {
            maxTotal = total;
            maxX = i;
        }
    }

    cout << maxX << el;
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