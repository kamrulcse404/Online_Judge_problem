#include<stdio.h>
#include<math.h>

int main()
{
    int t, n, count = 0, test;
    double r, res, ck;
    scanf("%d",&t);
    while(t--)
    {
        count++;
        scanf("%lf %d",&r,&n);
        res = 360.0/((double)n*2.0);
        res = (acos(-1)*res)/180.0;
        res = sin(res);
        res = (r*res)/(1.0+res);
        test = (int)res;
        ck = res -(double)test;
        if(ck!=0)
        {
            printf("Case %d: %.10lf\n",count,res);
        }
        if(ck==0)
        {
            printf("Case %d: %.0lf\n",count,res);
        }

    }

    return 0;
}
