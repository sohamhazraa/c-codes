#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int index(int ele, int pow);
void radix_sort(int a[],int n);

void main()
{
    printf("Enter the size of the array to be sorted : \n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    radix_sort(a,n);
}

void radix_sort(int a[],int n)
{
    int array[n][10];
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<10;b++)
        {
            array[a][b]=0;
        }
    }
    int ele;
    int pow =1;
    int k=0;
    for(int i=0;i<n;i++)
    {
        ele=a[i];
        int in = index(ele,pow);
        array[k][in]=ele;
        k++;
    }
    pow++;
    for(int j=0;j<n;j++)
    {
        for(int l=0;l<10;l++)
        {
            printf("%d ",array[j][l]);
        }
        printf("\n");
    }
}

int index(int ele,int power)
{
    int a = (int)pow(10.0,(double)(power));
    int index = ele % a;
    return index;
}