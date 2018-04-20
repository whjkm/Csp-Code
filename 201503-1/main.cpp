#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <map>
using namespace std;
int a[1002][1002];
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=1; i<=m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j!=n-1)
                {
                    printf("%d ",a[j][m-i]);
                }
                else
                {
                    printf("%d\n",a[j][m-i]);
                }
            }
        }
    }
    return 0;
}
