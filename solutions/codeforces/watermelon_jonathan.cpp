#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Improve velocity of i/o
    ios::sync_with_stdio(0);
    cin.tie(0);

    int w;

    scanf("%d", &w);

    if (w <= 2)
        printf("NO");
    else if (w % 2 == 0)
        printf("YES");
    else
        printf("NO");
}