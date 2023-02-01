#include<iostream>
#include<vector>
using namespace std;

vector<double> findavg(vector <int> &arr,int k){
vector<double> result(arr.size()-k+1);
double windowsum = 0;
int windowstart = 0;
for (int i = 0; i < arr.size(); i++)
{
    windowsum += arr[i];
    if (i >= k-1)
    {
        result[windowstart] = windowsum/k;
        windowsum -= arr[windowstart];
        windowstart++;
    }
    
}
  
return result;

}

int main(){
    vector<int> arr = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    vector<double> result = findavg(arr,5);
    for(double k : result){
        cout<<k<<" ";
    }
    return 0;
}
