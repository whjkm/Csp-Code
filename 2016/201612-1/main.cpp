/*#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int a[1002];
    while(scanf("%d",&n) != EOF)
    {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);    //����С��������
        if(n&1)     //������ʱ��ֻ���ܳ�����n/2λ��
        {
            int pivot = a[n/2];    //�м�λ��
            int p = 0, q = 0;
            for(int i=0; i<n; i++)
            {
                if(a[i] > pivot)
                {
                    p++;
                }
                else if(a[i] < pivot)
                {
                    q++;
                }
            }
            if(p == q)
            {
                printf("%d\n",pivot);
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            int pivot1 = a[n/2];    //�м�λ��
            int p = 0, q = 0;
            for(int i=0; i<n; i++)
            {
                if(a[i] > pivot1)
                {
                    p++;
                }
                else if(a[i] < pivot1)
                {
                    q++;
                }
            }
            if(p == q)
            {
                printf("%d\n",pivot1);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}
*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int a[1002];
    while(scanf("%d",&n) != EOF)
    {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);    //����С��������
        int pivot = a[n/2];    //�м�λ��
        int p = 0, q = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i] > pivot)
            {
                p++;
            }
            else if(a[i] < pivot)
            {
                q++;
            }
        }
        if(p == q)
        {
            printf("%d\n",pivot);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
