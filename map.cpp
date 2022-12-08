#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    map<int, int> mp;
    cout << mp.size() << endl;
    mp[1]++;
    mp[1]++;
    cout << mp.size() << endl;
    mp.erase(mp.find(1));
    cout << mp.size() << endl;
    return 0;
}
