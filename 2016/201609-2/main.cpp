/*#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int a[102],s[100];
    while(scanf("%d",&n)!=EOF)
    {
        memset(s,0,sizeof(s));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            for(int k =0; k<a[i]; k++)
            {
                for(int j=1; j<=100; j++)
                {
                    if(s[j] != 1)
                    {
                        s[j] = 1;
                    }
                }
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
#include <queue>
using namespace std;
int main()
{
    int n,k = 1,p;
    queue<int>q[21];  //每行作为一个队列
    for(int i=1; i<=20; i++)  //初始化队列
    {
        for(int j=0; j<5; j++)
        {
            q[i].push(k++);
        }
    }
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&p);
            //连续分配
            for(int row = 1; row <= 20; row++)
            {

            }
        }
    }
    return 0;
}
