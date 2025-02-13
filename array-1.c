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

int indinsert(int arr[], int size, int capacity, int element, int index)
{
    // insertion in array
    // overflow condition

    if (size >= capacity)
    {
        return -1;
    }

    else
    {
        // int arr[100]={1,2,3,4,5}

        for (int i = size - 1; i >= index; i--)
        {

            arr[i + 1] = arr[i];
        }

        arr[index] = element;
        return 1;
    }
}

int main()
{

    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5, element = 40, index = 1;

    display(arr, size);
    indinsert(arr, size, 100, element, index);

    size = size + 1;

    display(arr, size);
}