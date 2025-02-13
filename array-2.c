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

void indeletion(int arr[], int size, int index)
{
    // deletion in array

    // int arr[100]={1,2,3,4,5}

    for (int i = index; i <= size - 1; i++)
    {

        arr[i] = arr[i + 1];
    }
}
int main()
{

    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5, index = 1;

    display(arr, size);
    indeletion(arr, size, index);

    size = size - 1;

    display(arr, size);
}