#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        for(int k=n-1;k>i;k--)
        {
            printf("    ");
        }
        for(int l=0;l<=i;l++)
        {
            printf("* ");
        }
        printf("\n");
    }
}