// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[100], i, n, target, low, high, mid, flag = 0;
    printf("enter the length of the array\n");
    scanf("%d", &n);
    printf("enter the elements of the array in assending order:  ");
    for (i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the target\n");
    scanf("%d", &target);
    low = 0;
    high = n - 1;
    while (low <= high)
    {

        mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            flag = 1;
            break;
        }
        else if (target < arr[mid])
        {

            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    if (flag == 1)
    {
        printf("element found at position %d", mid + 1);
    }
    else
        printf("element not found ");
}