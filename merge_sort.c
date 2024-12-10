#include <stdio.h>
#include <stdlib.h>
void merge_sort(int a[], int len);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_array(int a[], int l, int m, int r);

void merge_sort(int a[], int len)
{
    merge_sort_recursion(a, 0, len-1);   
}

void merge_sort_recursion(int a[], int l,int r)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        merge_sort_recursion(a, l, m);
        merge_sort_recursion(a, m+1, r);

        merge_sorted_array(a, l, m, r);
    }
}

void merge_sorted_array(int a[], int l, int m, int r)
{
    int left_length = m-l+1;
    int right_length = r-m;

    int temp_array_left [left_length];
    int temp_array_right [right_length];

    for(int i=0;i<left_length;i++)
        temp_array_left[i] = a[l+i];

    for(int j=0;j<right_length;j++)
        temp_array_right[j] = a[m+1+j];

    for(int i=0,j=0,k=0;k<r;k++)
    {
        if(i<left_length && r>=right_length||temp_array_left[i]<=temp_array_right[j])
        {
            a[k]=temp_array_left[i];
            i++;
        }
        else
        {
            a[k]=temp_array_right[j];
            j++;
        }
    }
}

void main()
{
    int array[] = {5,6,4,3,7,1,8,9,2,0};
    int len = 10;

    merge_sort(array, len);
    for(int i=0;i<len;i++)
        printf("%d ",array[i]);
    printf("\n");
}