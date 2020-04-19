#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int i,n,grade;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&grade);

    if(grade>37)
    {
        if(grade%5>2)
        {
            grade=grade+5-grade%5;
        }
    }
    printf("%d\n",grade);
    }
    //Your code goes here
    return 0;
}
