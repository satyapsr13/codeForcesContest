#include <cstring>
#include <iostream>
using namespace std;
int arr[100];
int n;
int counter = 0;
int dp[100][100];
int getSum(int i, bool l, int sum)
{
    if (n == i)
        return sum;

    int r = 9;
    if (l)
        r = arr[i];
    int res = 0;
    // if (dp[i][l] != -1)
    //     return dp[i][l];

    for (int j = 0; j <= r; ++j)

    {
        cout << " counter " << counter++ << " " << j << endl;

        res += getSum(i + 1, (l and (j == arr[i])), sum + (j == 1));
    }

    return dp[i][l] = res;
}
int main()
{
    int t;
    memset(arr, -1, sizeof(arr));
    string s;
    cin >> s;
    n = s.size();

    for (int i = 0; i < n; ++i)
    {
        arr[i] = s[i] - '0';
    }
    memset(dp, -1, sizeof(dp));

    cout << getSum(0, 1, 0) << endl;

    return 0;
}
