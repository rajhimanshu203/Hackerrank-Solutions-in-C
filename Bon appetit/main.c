#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int sum = 0;
    for(i=0;i<n;i++)
        sum += a[i];
    int paid;
    scanf("%d",&paid);
    int x= sum-a[k];
    if((x)/2==paid)
        printf("Bon Appetit\n");
    else
        printf("%d\n",paid-(x)/2);
    return 0;
}

