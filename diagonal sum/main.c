#include <stdio.h>
int main()
{
    int n,a[100][100],sum1=0,sum2=0;
    scanf("%d",&n);

    for(int i=0;i<n;++i)
            {
                for(int j=0;j<n;++j)
                {
                    scanf("%d",&a[i][j]);
                    if(i==j)
                        sum1+=a[i][j];
                    if((i+j)==(n-1))
                        sum2+=a[i][j];

                }
            }
            if(sum1>sum2) printf("%d",(sum1-sum2));
            else printf("%d",(sum2-sum1));


    return 0;

}
