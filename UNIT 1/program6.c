#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,loc,value,n;

    printf("Enter the no of element:");
    scanf("%d",&n);

    printf("Enter  values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the location :",n);
    scanf("%d",&loc);

    if(loc <0 || loc >n)
    {
        printf("invalid location\n");
    }
    else
    {
        printf("Enter the value to insert:");
        scanf("%d",&value);


        for(i=n ;i>loc;i--)
        {
            a[i]=a[i - 1];
        }
       a[loc]=value;
       n++;

            printf("Array after insertion:\n");
            for(i=0;i<n;i++)
            {
                printf("%d\n",a[i]);
            }
    }
return 0;
}
