#include<stdio.h>
 int main()
 {
    int a[10] ,i,largest;
    printf("Enter 10 values\n");

    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
        largest=a[0];
        for(i=1;i<=9;i++)
        {

            if(a[i]>largest)
            {
               largest=a[i];
            }
        }
            printf("largest value is %d",largest);
        return 0;

 }
