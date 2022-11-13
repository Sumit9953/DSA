#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

void reverse(char s[],int low, int high){
    while (low <= high)
    {
        swap(s[low],s[high]);
        low++;
        high--;
    }
    
}

void Reverse(char *s,int n){
  int start = 0;
  for (int end = 0; end < n; end++)
  {
    if (s[end] == ' ')
    {
        reverse(s,start,end-1);
        start = end+1;
    }
  }
  reverse(s,start,n-1);
  reverse(s,0,n-1);
}

int main(){
        char str[] = "Hello sumit"; 
        int n = sizeof(str)/sizeof(char);
        Reverse(str,n);
        for(char x:str){
            cout<<x;
        }
}