#include<iostream>
#include<vector>
using namespace std;

int main(){
    char temp = cin.get();

    int digit = 0;
    int alphabets = 0;
    int space = 0;
    
    while (temp != '\n')
    {
        if(temp >= '0' and temp <= '9'){
            digit++;
        }
        if(temp >= 'a' and temp <= 'z' or temp >= 'A' and temp <= 'z'){
            alphabets++;
        }
        if(temp == ' ' or temp == '\t'){
            space++;
        }
        temp = cin.get();
    }

    cout<<"Alphabets "<<alphabets<<endl;
    cout<<"Digit "<<digit<<endl;
    cout<<"Space "<<space<<endl;
    
    return 0;
}