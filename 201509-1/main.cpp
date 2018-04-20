#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <map>
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
        for(int i=0; i<n; i++)
        {
            if(a[i] != a[i+1])
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
