#include <stdio.h>
#include <stdlib.h>
static int arr[128];
int main()
{   int n, temp;
    scanf("%d",&n);
    int j,i;
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               if(arr[j]>arr[j+1])
               {
                   temp = arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
               }
           }
       }
       for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}