#include<stdio.h>
int main()
{
    int i,n=1;
    double s=0.0;
    for(i=1; i<=39; i=i+2)
    {
        s=s+((double)i/(double)n);
        n=n+n;
    }
        printf("%.2lf\n",s);

        return 0;
}
