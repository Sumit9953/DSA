#include<iostream>
#include<stack>
using namespace std;

void prevgreater(int arr[],int n){
    stack<int> s;
    s.push(arr[0]);
    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int pg = (s.empty()) ? -1:s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
        
    }
    
}
void nextgreater(int arr[],int n){
     
    stack<int> s;
    s.push(arr[n-1]);
    for (int i = n-2; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int pg = (s.empty()) ? -1:s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
    }
}

int main(){
 int arr[] = {20,30,10,5,15};
 nextgreater(arr,5);
}