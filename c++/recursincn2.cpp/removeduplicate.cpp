#include<iostream>
using namespace std;

void duplicate(char s[]){
    if(s[0] == '\0'){
        return;
    }
    if(s[0] != s[1]){
        duplicate(s+1);
    }else{
        int i=1;
        for(; s[i] != '\0';i++){ 
            s[i-1] =s[i];  
        }
        s[i-1] = s[i];
        duplicate(s);
    }

}



int main(){
     char str[100];
    cin>>str;
    duplicate(str);
    cout<<str<<" ";
}