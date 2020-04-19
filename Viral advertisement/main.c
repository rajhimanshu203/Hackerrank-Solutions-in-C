#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,num,result,n;
scanf("%d",&n);
num =5;
result=2;
for(i=2;i<=n;i++)
{
    num =(num/2)*3;
    result+=(num/2);
}
    printf("%d",result);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
