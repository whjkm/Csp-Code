#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <map>
using namespace std;
int main()
{
    int n,k,count,sum;
    int a[1002];
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        count = 0;
        sum = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum += a[i];
            if(sum >= k && i!=n-1)
            {
               count ++;
               sum = 0;
            }
            else if(i==n-1 && sum>0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
