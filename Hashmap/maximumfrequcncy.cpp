#include<iostream>
#include<unordered_map>
using namespace std;

int MaximumFreq(int *a,int size){
    int fmax = 1;
    int res = 0;
    unordered_map<int,int> max;
    for (int i = 0; i < size; i++)
    {
        if(max.count(a[i])>0){
            max[a[i]] += 1;
            if(fmax<max[a[i]]){
                fmax = max[a[i]];
                res = i;
            }
          }else{
            max[a[i]]  = 1;
          }
        
    }
    // for (int i = 1; i < size; i++)
    // {
    //     if(max.at(a[i])>max.at(a[i-1])){
    //         res = a[i];
    //     }
    // }
    cout<<a[res];
}
int main()
{
int arr[] = {1,2,3,3,3,2,5,6};
MaximumFreq(arr,8);
}