// Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;
class Debug
{
public:
    // template <typename T, typename... Args>
    // // void debug(T a, T b)
    // // {
    // //     cout << "-> " << a << "\t"
    // //          << "-> " << b << endl;

    // // }
    // void func(T t, Args... args) // recursive variadic function
    // {
    //     std::cout << t << std::endl;

    //     func(args...);
    // }
    template <typename T, typename... Args>
    void func(T t, Args... args) // recursive variadic function
    {
        std::cout << __PRETTY_FUNCTION__ << ": " << t << std::endl;

        func(args...);
    }
};
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // solve();
    Debug d1;
    d1.func(5, 5);
    return 0;
}