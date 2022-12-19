#include <iostream>
using namespace std;

int deleteEle(int a[], int x, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {

        if (a[i] == x)
            break;
        if (n == i)
            return n;
    }

    for (int j = i; j < n - 1; j++)
    {

        a[j] = a[j + 1];
    }

    return n - 1;
}

int main()
{
    int arr[] = {3, 8, 12, 5, 6};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    int x;
    cout << "enter number" << endl;
    cin >> x;
    int size = deleteEle(arr, x, n);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
