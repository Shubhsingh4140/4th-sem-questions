#include <stdio.h>
void main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ele, flag = 0;
    printf("Enter element to be searched : ");
    scanf("%d", &ele);
    for (int i = 0; i < 10; i += 3)
    {
        if (arr[i] == ele)
        {
            flag = 1;
        }
        else if (arr[i] > ele)
        {

            for (int j = i - 3 + 1; j < i; j++)
            {
                if (arr[j] == ele)
                {
                    flag = 2;
                }
            }
        }
    }
    if (flag == 1)
    {
        printf("element found by jump search");
    }
    else if (flag == 2)
    {
        printf("element found by linear search");
    }
    else
    {
        printf("element not found ");
    }
}
