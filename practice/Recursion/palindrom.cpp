#include<iostream>
using namespace std;

bool palindrom(char s[],int st,int ed){
     if(ed+1 == 0 || ed+1 == 1){
        return true;
     }

     if(s[st] != s[ed]){
        return false;
     }
     return palindrom(s,st+1,ed-1);
}

int main(){
    char s[] = "ababcaba";
    int n = sizeof(s)/sizeof(char);
    cout<<n<<endl;
    cout<<palindrom(s,0,n-2);
}