#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int u)
{
    int n1 = mid - l + 1;
    int n2 = u - mid;
    int a[n1];
    int b[n2];
    
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];  // Copy elements from arr[l] to arr[l + n1 - 1]
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];  // Copy elements from arr[mid + 1] to arr[mid + n2]
    }
    
    int i = 0, j = 0, k = l;  // Initialize i, j, and k properly
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    
    cout << "\nSorted array: \n";
    for (int k = l; k <= u; k++)  // Correct the loop condition here
    {
        cout << arr[k] << " ";
    }
}

void Merge_Sort(int arr[], int l, int u)
{
    if (l < u)  // Correct the termination condition here
    {
        int mid = (l + u) / 2;
        Merge_Sort(arr, l, mid);
        Merge_Sort(arr, mid + 1, u);
        merge(arr, l, mid, u);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int u = n - 1;
    Merge_Sort(arr, l, u);
    return 0;
}

