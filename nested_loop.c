#include<stdio.h>
int main()
{
    int n;
    printf("write value of n:");
    scanf("%d",&n);
    for(int x=1;x<=n;x++)
    {
        for(int i=1;i<=10;i++)
        {
            printf("%d ",x*i);
        }
        printf("\n");
    }
    return 0;
    } 

    

