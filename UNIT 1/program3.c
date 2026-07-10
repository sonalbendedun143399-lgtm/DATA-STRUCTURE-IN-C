#include<stdio.h>
 int main()
 {
    int a[3],b[3],c[3],i;
    printf("enter value of a:",a);

    for(i=0;i<=2;i++)
     {
          scanf("%d",&a[i]);
     }

      printf("enter value of b:",b);
     for(i=0;i<=2;i++)
     {
         scanf("%d",&b[i]);
     }

      for(i=0;i<=2;i++)
      {
          c[i]=a[i]+b[i];

      }
       for(i=0;i<=2;i++)
       {
            printf("total=%d\n",c[i]);
       }
     return 0;
 }

