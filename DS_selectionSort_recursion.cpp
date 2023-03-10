#include <iostream>
using namespace std;

void sortArray(int *arr, int idx, int size)
{

    // base condition
    if (idx == size)
    {
        return;
    }

    int min_idx = idx;

    for (int j = idx + 1; j < size; j++)
    {
        if (arr[min_idx] > arr[j])
        {
            min_idx = j;
        }
    }
    int temp = arr[idx];
    arr[idx] = arr[min_idx];
    arr[min_idx] = temp;

    sortArray(arr, idx + 1, size);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;
    cout << "before sorting.." << endl;
    printArray(arr, n);

    sortArray(arr, 0, n);
    cout << "after sorting.." << endl;
    printArray(arr, n);
    return 0;
}