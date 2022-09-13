 #include <iostream>
using namespace std;

// int large(int arr[] ,int n){
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>arr[res]){
//             res = i;      
//         }
//     }
//      return res;
//  }

// int secondelarge( int arr[],int n){
// int largest = large(arr,n);
// int res = -1;
// for (int i = 0; i < n; i++)
// {
//     if(arr[i] != arr[largest]){
//         if(res == -1)
//         res = i;
//         else if (arr[i]>arr[res])
//         res =i;
//     }
// }
// return res;
// }

int secondelarge(int arr[],int n){
    int res =-1,largest =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;

}

int main(){
    int arr[] = {10,8,10,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<secondelarge(arr,n)<<endl;
}