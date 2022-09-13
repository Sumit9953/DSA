
#include <iostream>
using namespace std;
int rverse(int a[],int n){
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
     }

}
// int INrverse(int a[],int n){
//    for (int i = 0; i < n; i+=2)
//    {
//     if(i+1<n){
//     swap(a[i],a[i+1]);
//     }
//    }

// }

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3, 5, 7, 8, 9, 4};
    cout << " Before " << endl;
    print(arr, 6);
    rverse(arr, 6);
    cout << " after " << endl;
    print(arr, 6);
}