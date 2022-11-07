#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    cin.get();
    char sentance[1000];
    char largest[1000];

    int largest_len = 0;
    while (n--)
    {
        cin.getline(sentance,100);
        int len = strlen(sentance);

        if(len > largest_len ){
            largest_len = len;
            strcpy(largest,sentance);
        }
    }
    cout<<largest<<" ";
}