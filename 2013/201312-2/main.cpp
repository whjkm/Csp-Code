#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    char isbn[20];
    int num;
    while(scanf("%s",isbn)!=EOF)
    {
        num = 0;
        for(int i=0,k=1; i<strlen(isbn)-1; i++)
        {
            if(isbn[i]!='-')
            {
                num += (isbn[i]-'0')*k;
                k++;
            }
        }
        num = num % 11;
        if(num == 10)
        {
            if(isbn[strlen(isbn)-1] == 'X')
            {
                printf("Right\n");
            }
            else
            {
                isbn[strlen(isbn)-1] = 'X';
                printf("%s\n",isbn);
            }
        }
        else
        {
            if(num == isbn[strlen(isbn)-1] - '0')
            {
                printf("Right\n");
            }
            else
            {
                isbn[strlen(isbn)-1] = num + '0';
                printf("%s\n",isbn);
            }
        }
    }
    return 0;
}
