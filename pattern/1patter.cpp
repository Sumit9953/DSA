#include<iostream>
using namespace std;


int main(){
  
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<n-j;
        }
        cout<<endl;
        
    }
    
}