#include <stdio.h>
int main()
{
    int len=0, len1=0, k=0;
    int a[20], b[20], c[20];
    printf("enter the sizes of the arrays");
    scanf("%d",&len);
    scanf("%d",&len1);
    for(int i=0; i<len; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<len1; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len1; j++)
        {
            if(a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
        }
    }
    for(int i=0; i<k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0; // Add a return statement to indicate successful execution
}
