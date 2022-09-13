#include<iostream>
using namespace std;

// int is_sorted(int arr[] ,int size){
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     bool issmallsort = is_sorted(arr+1,size-1);
//     return issmallsort;
// }
// int at_index(int arr[],int size,int x){
//     if(size == 0){
//         return -1;
//     }
//     if(arr[0] == x){
//         return 0;
//     }
//     int index = at_index(arr+1,size-1,x);
//     return index+1;
// };
int at_index(int arr[],int size,int x){
    if(size == 0){
        return -1;
    }

   int index = at_index(arr+1,size-1,x);
   if(index == -1){
    if(arr[0] == x){
        return 0;
    }else{
    return -1;
    }
   }
    return index+1;
};



int main(){
 int arr[] = {2,4,6,6,6};
 int size = sizeof(arr)/sizeof(arr[0]);

 cout<<at_index(arr,size,6);
}