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
    ll rows, cols;
    cin >> rows >> cols;

    map<int, int> rowMap;
    vector<vector<char>> arr(rows, vector<char>(cols));
    ll total = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '#')
            {
                total++;
                rowMap[i]++;
            }
        }
    }

    if (total == 1)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (arr[i][j] == '#')
                {
                    cout << i + 1 << " " << j + 1 << el;
                    return;
                }
            }
        }
    }

    // get the max count in which row?
    int maxCount = 0;
    int maxRow = 0;
    for (auto &x : rowMap)
    {
        if (x.second > maxCount)
        {
            maxCount = x.second;
            maxRow = x.first;
        }
    }

    int count = (maxCount / 2) + 1;

    int c = 0;
    for (int j = 0; j < cols; j++)
    {
        if (arr[maxRow][j] == '#')
        {
            c++;
        }
        if (c == count)
        {
            cout << maxRow + 1 << " " << j + 1 << el;
            return;
        }
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