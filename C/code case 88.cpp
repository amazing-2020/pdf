#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;
int a[1000001]={0};
int n, x, y, z, m;
int main()
{
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    scanf("%d", &m);
    while(m--)
    {
        scanf("%d", &x);
        y = lower_bound(a, a+n, x)-a;
        if (y-1<0) {
            printf("-1\n");
        } else {
            printf("%d", y-1);
        }
    }

    return 0;
}