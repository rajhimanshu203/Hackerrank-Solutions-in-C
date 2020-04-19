#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int h,m,s;
    char a;
    scanf("%d:%d:%d%c",&h,&m,&s,&a);
    if(a=='P'&&h!=12)
        h+=12;
    if(a=='A'&&h==12&&m>0)
        h-=12;
    if(a=='A'&&m==0,s==0)
        h=0;
    printf("%02d:%02d:%02d",h,m,s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
