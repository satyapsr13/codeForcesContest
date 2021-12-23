#include <bits/stdc++.h>
using namespace std;

class a1
{
public:
    int arr[10];
    void a()
    {
    }
};
class a2
{
public:
    void a()
    {
    }
};

class a3 : public a2, public a1

{
public:
    void a()
    {
    }
};

int main(int argc, char const *argv[])
{
    cout << sizeof(a3);

    return 0;
}
