#include<iostream>
using namespace std;

bool palindrom(char s[],int st,int end){
   if(end <= 1){
    return true;
   }
    if(s[st] != s[end]){
        return false;
    }
    return palindrom(s,st+1,end-1);


}

int main(){
    char s[] = "aacbca";
    int n = sizeof(s)/sizeof(s[0]);
    int start = 0;
    int end = n-2;
    cout<<palindrom(s,start,end)<<" ";
   
}