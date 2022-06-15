#include<stdio.h>
 
int main()
{
    int a,b,c,n,i;
    int sa=0,sb=0,sc=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        sa+=a;
        sb+=b;
        sc+=c;
    }
    if(sa==0 && sb==0 && sc==0)
         printf("YES\n");
    if(sa!=0 || sb!=0 || sc!=0)
        printf("NO\n");
 
  return 0;
}
 
