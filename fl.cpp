
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n;
    cin >> n;
    float b;
    cin >> b;
    int x = b;

    b -= x;
    int y;
    string yy, s = to_string(b);
    int i = s.find('.') + 1;
    while (s.size() > i + 1)
    {
        if (s[i++] != '0')
        {
            yy.push_back(s[i - 1]);
        }
    }
    y = stoi(yy);
    cout << "n-> " << n;
    cout << "\n";
    cout << "x-> " << x;
    cout << "\n";
    cout << "y-> " << y;
    cout << "\n";
    return 0;
}