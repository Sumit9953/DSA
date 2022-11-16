#include<iostream>
using namespace std;

void Pair(int *arr,int n){
   int currSum = 0;
   int maxSum = 0;
   for (int i = 0; i < n; i++)
   {
     currSum = currSum+arr[i];
     if(currSum < 0){
         currSum = 0;
     }
    maxSum = max(maxSum,currSum);
   }
   cout<<maxSum<<" "<<endl;
}


int main(){
    int arr[] = {1,2,3};
    Pair(arr,3);

}
