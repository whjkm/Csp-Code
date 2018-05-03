#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int a[505];
    int count;
    while(scanf("%d",&n)!=EOF)
    {
        count = 0;
       for(int i=0; i<n; i++)
       {
           scanf("%d",&a[i]);
       }
       for(int i=0; i<n; i++)
       {
           for(int j=n-1; j>=0; j--)
           {
               if(a[i] == -a[j])
               {
                   count++;
               }
           }
       }
       printf("%d\n",count/2);
    }
    return 0;
}
