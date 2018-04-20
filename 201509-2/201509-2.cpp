#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
bool leap_year(int y)
{
	if(y%4 == 0 && y%100 !=0)
	{
		return true;
	}
	else if(y%400 == 0)
	{
		return true;
	}
	return false;
}
int main()
{
	int y,d;
	bool flag;
	int a[12] = {31,29,31,30,31,30,31,31,30,31,30,31}; 
	while(scanf("%d%d",&y,&d)!=EOF)
	{
		//���ж��ǲ�������
		flag = leap_year(y);
		if(flag) //������ 
		{
			int i = 0;
			while(d - a[i] > 0)
			{
				d = d - a[i++];
			}
			printf("%d%d",i+1,d);
		}
		else
		{
			int i = 0;
			while(d - a[i] > 0)
			{
				if(i == 1)
				{
				   d = d - a[i++]+1;
				}
				else
				{
				   d = d - a[i++];
				}	
			}
			printf("%d%d",i+1,d);
		}
	}
	return 0;
}
