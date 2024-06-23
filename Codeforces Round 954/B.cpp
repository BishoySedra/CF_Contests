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

int arr[103][103];

void solve()
{
    int rows, cols;
    cin >> rows >> cols;

    // initialize the matrix
    for (int i = 0; i <= rows + 1; i++)
    {
        for (int j = 0; j <= cols + 1; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // iterate over the matrix to be stabilized
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i][j - 1])
            {
                arr[i][j] = max({arr[i + 1][j], arr[i - 1][j], arr[i][j + 1], arr[i][j - 1]});
            }
        }
    }

    // output the stabilized matrix
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << el;
    }
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