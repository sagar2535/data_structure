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
    void printArray()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void inputArray()
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
};
int main()
{
    Array a(10, 5);
    a.inputArray();
    a.printArray();
    cout << "\nMaximum in Array is : " << a.MAX();
    cout << "\nMaximum in Array is : " << a.MIN();
    return 0;
}