#include<iostream>
#include<string.h>
using namespace std;

void replace(char *str){
    int space = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' '){
            space++;
        }
    }

    int idx = strlen(str) + 2*space;
    str[idx] = '\0';
    for (int i = strlen(str)-1; i >= 0; i--)
    {
        if(str[i] == ' '){
            str[idx-1] = '0';
            str[idx-2] = '2';
            str[idx-3] = '%';
             idx = idx-3;
        }else{
            str[idx-1] = str[i];
            idx--;
        }
    }
    
    

}

int main(){
    char str[1000];
    cin.getline(str,1000);
    replace(str);
    cout<<str<<" ";
}
