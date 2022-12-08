#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    multiset<int> mst;
    mst.insert(2);
    mst.insert(2);
    mst.insert(20);
    mst.insert(21);
    mst.erase(mst.find(2));
    for(auto &it:mst)
    {
        cout << it << endl;
    }

    return 0;
}
