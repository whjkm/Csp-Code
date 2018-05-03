/*#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int a[1002],b[1002],c[1002];
    while(scanf("%d",&n)!=EOF)
    {
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0; i<n; i++)
        {
           b[a[i]]++;
           c[i] = b[a[i]];
        }
        for(int i=0; i<n-1; i++)
        {
            printf("%d ",c[i]);
        }
        printf("%d\n",c[n-1]);
    }
    return 0;
}
*/

//边输入，边统计，然后输出
/*#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int n,m;
    int a[1002];
    while(scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&m);
            a[m]++;
            if(i!=n-1)
            {
                printf("%d ",a[m]);
            }
            else
            {
                printf("%d\n",a[m]);
            }
        }
    }
    return 0;
}
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <map>
using namespace std;

int main()
{
    int n,v;
    map<int,int> m;
    while(cin >> n)
    {
        for(int i=0; i<n; i++)
        {
            cin >> v;
            m[v]++;
            if(i!=n-1)
            {
                printf("%d ",m[v]);
            }
            else
            {
                printf("%d\n",m[v]);
            }
        }
    }
    return 0;
}
