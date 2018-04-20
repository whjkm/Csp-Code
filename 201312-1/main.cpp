#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    int a[1002];
    int map1[10002];
    while(scanf("%d",&n)!=EOF)
    {
      memset(map1,0,sizeof(map1));
      for(int i=0; i<n; i++)
      {
          scanf("%d",&a[i]);
      }
      sort(a,a+n);
      for(int i=0; i<n; i++)
      {
          map1[a[i]]++;
      }
      int max1 = 0,num = 0;
      for(int i=0; i<n; i++)
      {
          if(max1 < map1[a[i]])
          {
              max1 = map1[a[i]];
              num = a[i];
          }
      }
      printf("%d\n",num);
    }
    return 0;
}
