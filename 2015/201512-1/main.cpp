#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    char a[20];
    int sum;
    while(scanf("%s",a) != EOF)
    {
        sum = 0;
        for(int i=0; a[i]!='\0'; i++)
        {
            sum += a[i] - '0';
        }
        printf("%d\n",sum);
    }
    return 0;
}
