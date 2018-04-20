#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int n,max,sub;
    int a[1002];
    while(scanf("%d",&n)!=EOF)
    {
        max = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0; i<n-1; i++)
        {
            sub = abs(a[i+1] - a[i]);
            if(sub > max)
            {
                max = sub;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
