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
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    vector<int> ind(m);
    forN(m)
    {
        cin >> ind[i];
        ind[i]--;
    }

    string c;
    cin >> c;

    sort(interval(c));
    sort(interval(ind));

    for (int i = 0, j = 0; i < m; i++)
    {
        s[ind[i]] = c[j++];
        while (i < m && ind[i] == ind[i + 1])
        {
            i++;
        }
    }

    cout << s << el;
}

int main()
{
    file; // Uncomment if using input/output files
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