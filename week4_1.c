#include <stdio.h>
int c = 0, in = 0;
void merge(int arr[], int l, int r, int mid)
{
    in++;
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a1[n1];
    int a2[n2];
    for (i = 0; i < n1; i++)
    {
        a1[i] = arr[i + l];
    }
    for (j = 0; j < n2; j++)
    {
        a2[j] = arr[mid + j + 1];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            arr[k] = a1[i];
            i++;
            k++;
            c++;
        }
        else
        {
            arr[k] = a2[j];
            j++;
            k++;
            c++;
        }
    }
    while (i < n1)
    {
        arr[k] = a1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = a2[j];
        k++;
        j++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, r, mid);
    }
}
void main()
{
    int n, t;
    printf("Enter number of test cases : ");
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        printf("Enter size : ");
        scanf("%d", &n);
        int arr[n];
        int l = 0, r = n - 1, mid = (l + r) / 2;
        printf("Enter elements of array : ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        mergeSort(arr, l, r);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("%d %d", c, in);
    }
}