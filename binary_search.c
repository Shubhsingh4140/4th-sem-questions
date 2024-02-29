#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int mid, low = 0, high = 5, ele, c = 0;
    mid = (low + high) / 2;
    printf("Enter element to search: ");
    scanf("%d", &ele);
    while (low < high)
    {
        mid = (low + high) / 2;
        if (ele > arr[mid])
        {
            low = mid + 1;
        }
        else if (ele < arr[mid])
        {
            high = mid;
        }
        else if (ele != arr[mid])
        {
            printf("Element not found");
            break;
        }
        else
        {
            printf("Element found at %d", mid);
            break;
        }
    }

    return 0;
}
