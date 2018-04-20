#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int n,count;
    int a[1002];
    while(scanf("%d",&n)!=EOF)
    {
        count = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        {
            if(a[i+1] - a[i] == 1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
