#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
    {
    for(int j=0;j<n-1-i;j++)
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    if(n%2==0)
    {
        printf("%d %d",a[(n-1)/2],a[(n-1)/2+1]);
    }
    else
    {
        printf("%d",a[n/2]);
    }
    return 0;
}