#include <stdio.h>

// Function to perform insertion sort
void insertionS(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        int j = i;
        // Move elements of arr[0..i-1], that are greater than temp, to one position ahead of their current position
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

void mergeS(int arr[], int low, int high)
{

    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    mergeS(arr, low, mid);
    mergeS(arr, mid + 1, high);
    mergeS(arr, low, high);
}
void selectionS(int arr[], int n)
{

    for (int i = 0; i < n - 2; i++)
    {
        int min = i;

        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
int main()
{
    int arr[] = {5, 4, 88, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Perform insertion sort
    // insertionS(arr, n);
    mergeS(arr, 0, 4);

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Add a newline character for better output formatting

    return 0;
}