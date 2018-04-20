#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    while(scanf("%d",&t) != EOF)
    {
        int a1 = 1500 * 0.03;
        int a2 = (4500 - 1500) * 0.1;
        int a3 = (9000 - 4500) * 0.2;
        int a4 = (35000 - 9000) * 0.25;
        int a5 = (55000 - 35000) * 0.3;
        int a6 = (80000 - 55000) * 0.35;
        double x;
        if(t > 61005)
        {
            x = (t+a1+a2+a3+a4+a5+a6-83500*0.45)/0.55;
        }
        else if(t<=61005 && t>=44755)
        {
            x = (t+a1+a2+a3+a4+a5-58500*0.35)/0.65;
        }
        else if(t<=44755 && t>30755)
        {
            x = (t+a1+a2+a3+a4-38500*0.3)/0.7;
        }
        else if(t<=30755 && t>11255)
        {
            x = (t+a1+a2+a3-12500*0.25)/0.75;
        }
        else if(t<=11255 && t>7655)
        {
            x = (t+a1+a2-8000*0.2)/0.8;
        }
        else if(t<=7655 && t>4955)
        {
            x = (t+a1-5000*0.1)/0.9;
        }
        else if(t>3500 && t<=4955)
        {
            x = (t-3500*0.03)/0.97;
        }
        else
        {
            x = t;
        }
        printf("%.lf\n",x);
    }
    return 0;
}

/*#include <iostream>

using namespace std;

int S[]={0,3500,5000,8000,12500,38500,58500,83500,999999};
int T[]={0,3500,4955,7655,11255,30755,44755,61005,999999};
float f[]={1,0.97,0.9,0.8,0.75,0.7,0.65,0.55,0};

int main(void){
    int N,i,res;
    cin>>N;
    for(i=0;i<9;i++){
        if(T[i]>=N){
            break;
        }
    }
    res=S[i-1]+(N-T[i-1])/f[i-1];
    cout<<res<<endl;

    return 0;
}
*/
