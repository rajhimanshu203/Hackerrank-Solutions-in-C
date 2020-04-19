#include <stdio.h>
#include <conio.h>
void main()
{
    int i,a[3],b[3],alice=0,bob=0;

    for(i=0;i<=2;i++)
        scanf("%d",&a[i]);

    for(i=0;i<=2;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<=2;i++)
    {
        if(a[i]>b[i])alice++;
        else if (b[i] > a[i])bob++;


    }

    printf("%d %d",alice,bob);

    getch();
}
