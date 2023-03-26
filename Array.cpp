#include <bits/stdc++.h>
using namespace std;
class Array
{
private:
    int *arr;
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        length = 0;
        arr = new int[size];
    }
    Array(int sz, int len)
    {
        size = sz;
        length = len;
        arr = new int[size];
    }
    ~Array()
    {
        delete[] arr;
    }
    void PrintArray()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void InputArray()
    {
        for (int i = 0; i < length; i++)
        {
            cin >> arr[i];
        }
    }
    int MAX()
    {
        int max = arr[0];
        for (int i = 0; i < length; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
    int MIN()
    {
        int min = arr[0];
        for (int i = 0; i < length; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        return min;
    }
    int LinearSearch(int key)
    {
        for (int i = 0; i < length; i++)
        {
            if (arr[i] == key)
            {
                cout << "Key is found on index : ";
                return i;
            }
        }

        cout << "Key is not found : ";
        return -1;
    }
    void Append(int value)
    {
        if (length < size)
        {
            arr[length++] = value;
        }
    }
    void Insert(int index, int value)
    {
        if (index >= 0 && index <= length)
        {
            for (int i = length; i > index; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
            length++;
        }
    }
    void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int Delete(int index)
    {
        int x = 0;
        if (index >= 0 && index < length)
        {
            x = arr[index];
            for (int i = index; i < length - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            length--;
            return x;
        }
        return 0;
    }
    int BinarySearch(int key)
    {
        int start = 0, end = length - 1, mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (key == arr[mid])
            {
                cout << "Key is found on index : ";
                return mid;
            }
            else if (key < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout << "Key is not found : ";
        return -1;
    }
};
int main()
{
    Array a(10, 5);
    a.InputArray();
    // a.Insert(2, 5);
    // cout << "\nDelete index is : " << a.Delete(5) << endl;
    // cout << "\nMaximum in Array is : " << a.MAX();
    // a.PrintArray();
    // cout << "\nMaximum in Array is : " << a.MIN();
    int key;
    cout << "\nEnter Your Key : ";
    cin >> key;
    cout << a.BinarySearch(key);
    // cout << a.LinearSearch(key);

    return 0;
}