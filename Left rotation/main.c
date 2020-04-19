#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned long long int n,d;
    scanf("%llu%llu",&n,&d);
    unsigned long long int a[n];
    for(int i=0;i<n;i++)
        {
        int j=i-d;
        if(j<0)
            j=j+n;
        scanf("%llu",&a[j]);

    }
    for(int i=0;i<n;i++)
       printf("%llu ",a[i]);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
