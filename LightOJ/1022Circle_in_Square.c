#include<stdio.h>
#include<math.h>

int main()
{
    double pi = acos(-1);
    double area, carea, sqr, r;
    int cnt = 0, t;
    scanf("%d",&t);
    while(t--)
    {
        cnt++;
        scanf("%lf",&r);
        carea = pi*r*r;
        r*=2;
        sqr = r*r;
        area = sqr - carea;
        printf("Case %d: %.2lf\n",cnt,area);
    }
    return 0;
}

