#include<iostream>
using namespace std;


int main(){
  
    int n;
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        int p = i;
        for (int j = 1; j <= i; j++)
        {
            cout<<p;
            p--;
        }
        cout<<endl;
        
    }
    /*int p = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<p;
            p++;
        }
        cout<<endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
        
    }*/
    
}