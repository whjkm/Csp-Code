#include <cstdio>
#include <cstring>
#include <iostream>
#include <cstdlib>

int main()
{
    int n;
    int count;
    while(scanf("%d",&n) != EOF)
    {
        count = 0;
        while(n >= 50)
        {
            n = n - 50;
            count += 7;
        }
        while(n >= 30)
        {
            n = n - 30;
            count += 4;
        }
        if(n >= 0)
        {
           count += n/10;
        }

        printf("%d\n", count);
    }
    return 0;
}
