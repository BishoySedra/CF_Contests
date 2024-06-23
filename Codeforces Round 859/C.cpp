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
    int n;
    cin >> n;

    map<char, int> char_to_bit;

    int readyBit = 0;
    string s;
    for (int i = 0; i < n; i++)
    {
        char entry;
        cin >> entry;
        s += entry;

        if (!char_to_bit.count(entry))
        {
            char_to_bit[entry] = readyBit;
            if (readyBit == 1)
            {
                readyBit = 0;
            }
            else
            {
                readyBit = 1;
            }
        }

        if (readyBit == char_to_bit[entry] && char_to_bit[entry] == 1)
        {
            readyBit = 0;
        }

        if (readyBit == char_to_bit[entry] && char_to_bit[entry] == 0)
        {
            readyBit = 1;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (char_to_bit[s[i]] == char_to_bit[s[i - 1]])
        {
            cout << "NO" << el;
            return;
        }
    }

    cout << "YES" << el;
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
