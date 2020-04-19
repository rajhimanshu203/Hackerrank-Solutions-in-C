#include<stdio.h>
int main()
{
int i,j,k,n,m,a,b,s,t,cnt1=0,cnt2=0;
scanf("%d%d",&s,&t);
scanf("%d%d",&a,&b);
scanf("%d%d",&n,&m);
int c[n],d[m];
    for(i=0;i<n;i++)
    {
    scanf("%d",&c[i]);
    if((a+c[i])>=s&&(a+c[i])<=t)
    cnt1++;
    }
    for(i=0;i<m;i++)
    {
    scanf("%d",&d[i]);
    if((b+d[i])>=s&&(b+d[i])<=t)
    cnt2++;
    }
    printf("%d\n%d",cnt1,cnt2);
    return 0;
}
