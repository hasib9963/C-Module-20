#include<stdio.h>
int main()
{
   int n,xt,xp,t=0,p=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d %d",&xt,&xp);
       if(xt>xp)
       {
           if(xt==xp)
            continue;
            t++;
       }
       else
       {
           if(xt==xp)
            continue;
            p++;
       }
   }
   if(t>p)
   {
       printf("Tiger");
   }
   else if(p>t)
   {
       printf("Pathan");
   }
   else
   {
       printf("Draw");
   }
   return 0;
}
