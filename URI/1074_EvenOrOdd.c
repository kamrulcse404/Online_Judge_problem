#include<stdio.h>
int main()
{
    int n,num,even;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        even=num/2;
        if(num==0)
        {
            printf("NULL\n");
        }
        else if(even>0 && num%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if(even<0 && num%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(even<0 && num%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(even>0 && num%2!=0)
        {
            printf("ODD POSITIVE\n");
        }

    }

    return 0;
}
