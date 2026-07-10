#include<stdio.h>
 int main()
 {
    int a[3],b[3],c[6],i,j;
    printf("enter value of a:\n",a);

    for(i=0;i<=2;i++)
     {
          scanf("%d",&a[i]);
     }

      printf("enter value of b:\n",b);
     for(j=0;j<=2;j++)
     {
         scanf("%d",&b[j]);
     }

      for(i=0;i<=2;i++)
      {
          c[i]=a[i];

      }
         for(j=0;j<=3;j++)
      {
          c[i]=b[j];
          i++;

      }
      printf("merged values:\n");
       for(i=0;i<=5;i++)
       {
            printf("%d\n",c[i]);
       }
     return 0;
 }


