#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,v1,x2,v2,i;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    for(i=0;i<=10000;i++)
    {
        if(x1+v1*i==x2+v2*i)
        {
            printf("YES");
            break;
        }

    }
    if(i>10000)
        printf("NO");
    return 0;
}

