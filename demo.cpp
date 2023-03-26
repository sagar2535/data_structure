#include <bits/stdc++.h>
using namespace std;
void ArrayInput(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void ArrayOutput(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter Array size\n";
    cin >> n;
    int *arr = new int[n];
    if (arr == NULL)
    {
        cout << "Memory is not located in Heapp... Error: Array  is NULL\n";
    }
    else
    {
        cout << "Memory is Allocated in Heap \n";
        ArrayInput(arr, n);
        ArrayOutput(arr, n);
        if (arr != nullptr)
        {
            delete[] arr;
            cout << "\nMemory is Freed From Heap\n";
        }
    }

    return 0;
}