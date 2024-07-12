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
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 5;
    while (cnt--)
    {
        // getting the smallest number and doing the operation
        if (a <= b && a <= c)
        {
            a++;
        }
        else if (b <= a && b <= c)
        {
            b++;
        }
        else if (c <= a && c <= b)
        {
            c++;
        }
    }

    cout << a * b * c << el;
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