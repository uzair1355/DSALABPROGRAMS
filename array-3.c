// data structures by harry

#include <stdio.h>
// traversal
void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    printf("\n");
}

int binarysearch(int arr[], int size, int element)
{
    // int arr[100]={1,2,3,4,5}
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)

    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5, element = 1;
    display(arr, size);

    int elementindex = binarysearch(arr, size, element);
    printf("element found at %d index:", elementindex);
}