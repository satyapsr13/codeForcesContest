#include <cstdio>
#include <algorithm>
using namespace std;
int T, a, ans;
int main()
{
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &a);
        if (!a)
        {
            printf("0 ");
            continue;
        }
        ans = 15;
        for (int i = 0; i <= 15; ++i)
            ans = min(ans, 15 - __builtin_ctz(a + i) + i);
        printf("%d ", ans);
    }
    return 0;
}