#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    long long int output[t],sum,m,num[4];
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&sum);

        for(int j=0;j<3;j++)
        {
            scanf("%lld",&num[j]);
            sum=sum-num[j];
        }
        m=sum;
        output[i]=m;
    }
    for(int i=0;i<t;i++)
    {
        printf("%lld\n",output[i]);
    }
    return 0;
}
