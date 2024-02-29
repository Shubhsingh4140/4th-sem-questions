#include<stdio.h>
int c=0;
int inv=0;
void merge(int arr[],int l,int mid,int r )
{
    inv++;
    int i,j,k;
    int n1=mid-l+1;

    int n2=r-mid;
    int left[n1];
    int right[n2];
    for(i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        right[j]=arr[mid+j+1];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
            c++;
        }
        else{
            arr[k]=right[j];
            j++;
            k++;
            c++;
        }
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        k++;
        j++;
    }



}
void mergesort(int arr[],int l,int r)
{

    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }

}
void main()
{
    int i,a,size,test;
    printf("enter the number of test case\n");
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        printf("enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    for(a=0;a<size;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(a=0;a<size;a++)
    {
    printf("%d\t",arr[a]);
    }
    printf("\n");
       mergesort(arr,0,size-1);
    for(a=0;a<size;a++)
    {
    printf("%d\t",arr[a]);
    }
    printf("\nNumber of comparisons=%d\nNumber of inversions=%d",c,inv);
}
}
