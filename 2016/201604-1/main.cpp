#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int a[1002];
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int pivot = a[0];
        int count = 0;
        int flag = 2;
        for(int i=0; i<n; i++)
        {
            if(a[i] > pivot)
            {
                pivot = a[i];
                if(flag == 0)  //�ɵݼ���Ϊ����
                {
                    count++;
                }
                flag = 1;   //���Ϊ����

            }
            else if(a[i] < pivot)
            {
                pivot = a[i];
                if(flag == 1)   //�ɵ�����ɵݼ�
                {
                    count++;
                }
                flag = 0;   //���Ϊ�ݼ�
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
