#include <stdio.h>
int main()
{
    int arr[6];
    int ele, c = 0;
    printf("Enter elements");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search : ");
    scanf("%d", &ele);
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == ele)
        {
            c = 1;
            break;
        }
        else
        {
            c = 0;
        }
    }
    if (c == 1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
