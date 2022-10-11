#include <iostream>
using namespace std;

void boundary(int a[][100], int m, int n)
{
    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[0][i] << " ";
        }
    }
    else if (n == 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[i][0] << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[0][i] << " ";
        }
        for (int i = 1; i < m; i++)
        {
            cout << a[i][n - 1] << " ";
        }
        for (int i = n - 2; i >= 0; i--)
        {
            cout << a[m - 1][i] << " ";
        }
        for (int i = m - 2; i >= 1; i--)
        {
            cout << a[i][0] << " ";
        }
    }
}

int main()
{
    int arr[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    boundary(arr, m, n);
}